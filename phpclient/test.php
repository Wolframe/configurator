<?php 
header("Content-Type: text/xml");
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
	
	if( array_key_exists( "what", $_GET ) ) {
		$what = $_GET["what"];
	} else {
		$what = "tags";
	}
	if( array_key_exists( "search", $_GET ) ) {
		$search = $_GET["search"];
	} else {
		$search = "logo*";
	}
	if( array_key_exists( "id", $_GET ) ) {
		$id = $_GET["id"];
	} else {
		if ($what == "pictures") $id = "11";
		elseif ($what == "picture") $id = "10";
		elseif ($what == "features") $id = "1";
		elseif ($what == "categories") $id = "1";
	}
	
	if ($what == "tags" ) {
		$query = <<<EOF
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE tag SYSTEM 'TagHierarchyRequest'>
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
	} elseif( $what == "features") {
		$query = <<<EOF
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE feature SYSTEM 'FeatureHierarchyRequest'>
<feature id="$id"/>
EOF;
	} elseif( $what == "categories") {
		$query = <<<EOF
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE category SYSTEM 'CategoryHierarchyRequest'>
<category id="$id"/>
EOF;
	} elseif( $what == "manufacturers") {
		$query = <<<EOF
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE manufacturer SYSTEM 'ManufacturerListRequest'>
<manufacturer/>
EOF;
	} elseif( $what == "components") {
		$query = <<<EOF
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE component SYSTEM 'ComponentListRequest'>
<component/>
EOF;
	} elseif( $what == "configurations") {
		$query = <<<EOF
<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<!DOCTYPE configuration SYSTEM 'ConfigurationListRequest'>
<configuration/>
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
		preg_match('/[<][!]DOCTYPE[ ]*\w+ SYSTEM[ ]*["](\w+)[.]/', $result, $matches);
		$rr = explode( '?>', $result, 2);
		$output = '<?xml version="1.0" encoding="UTF-8" standalone="no"?>'
			. "\n"
			. '<?xml-stylesheet type="text/css" href="css/'
			. $matches[1]
			. '.css"?>'
			. "\n"
			. $rr[1];
		echo $output;
	}
	unset( $conn);
}
catch ( \Exception $e)
{
	echo "<html><head><title>ERROR</title></head><body>" . $e->getMessage() . "</body></html>";
}
?>

