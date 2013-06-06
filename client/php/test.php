<?php 
require 'session.php';
use Wolframe\Session as Session;

try
{
	$sslpath = "certs";
	$sslopt = array(
		"local_cert" => "$sslpath/combinedcert.pem",
		"verify_peer" => false
	);
	$conn = new Session( "127.0.0.1", 7961, $sslopt, "NONE");
	
	$what = $_GET["what"];
	if ($what == "") $what = "tags";
	$search = $_GET["search"];
	if ($search == "") $search = "logo*";
	$id = $_GET["id"];
	if ($id == "") $id = "11";
	
	if ($what == "tags" ) {
		$query = <<<EOF
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE tag SYSTEM "TagHierarchyRequest">
<tag id="1"/>
EOF;
	} elseif ($what == "pictures") {
		$query = <<<EOF
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE picture SYSTEM 'PictureListRequest'>
<picture>
  <search>$search</search>
</picture>
EOF;
	} elseif( $what == "picture") {
		$query = <<<EOF
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE picture SYSTEM 'PictureRequest'>
<picture id="$id"/>
EOF;
	} else {
		throw new Exception( "unknown what '" . $what . "'");
	}
	
	if (($result = $conn->request( $query)) === FALSE)
	{
		throw new Exception( $conn->lasterror());
	}
	else
	{
		echo "<html><head><title>" . $doctype . "</title></head><body>" . htmlspecialchars($result) . "</body></html>";
	}
	unset( $conn);
}
catch ( \Exception $e)
{
	echo "<html><head><title>ERROR</title></head><body>" . $e->getMessage() . "</body></html>";
}
?>

