@echo off
copy C:\Qt\4.8.1\bin\QtCored4.dll debug
copy C:\Qt\4.8.1\bin\QtGuid4.dll debug
copy C:\Qt\4.8.1\bin\QtNetworkd4.dll debug
copy C:\Qt\4.8.1\bin\QtXmld4.dll debug
copy c:\OpenSSL\openssl-1.0.1-win32-debug\bin\libeay32.dll debug
copy c:\OpenSSL\openssl-1.0.1-win32-debug\bin\ssleay32.dll debug
debug\qtclient.exe
