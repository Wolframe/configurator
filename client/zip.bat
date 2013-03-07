@echo off
-del qtclient.zip
-del /s /q C:\qtclient\*
rmdir C:\qtclient\imageformats
rmdir C:\qtclient
mkdir C:\qtclient
mkdir C:\qtclient\imageformats
copy qtclient.exe C:\qtclient
copy C:\Qt\4.8.1\bin\QtCored4.dll C:\qtclient
copy C:\Qt\4.8.1\bin\QtGuid4.dll C:\qtclient
copy C:\Qt\4.8.1\bin\QtNetworkd4.dll C:\qtclient
copy C:\Qt\4.8.1\bin\QtXmld4.dll .
copy C:\Qt\4.8.1\plugins\imageformats\*.dll C:\qtclient\imageformats
copy c:\OpenSSL\openssl-1.0.1-win32-debug\bin\libeay32.dll C:\qtclient
copy c:\OpenSSL\openssl-1.0.1-win32-debug\bin\ssleay32.dll C:\qtclient
copy C:\windows\system32\msvcp100d.dll C:\qtclient
copy C:\windows\system32\msvcr100d.dll C:\qtclient
cscript /nologo zip.vbs %TEMP%\qtclient.zip C:\qtclient
move %TEMP%\qtclient.zip .
