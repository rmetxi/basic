@echo off
taskkill -f -im GATESRV.exe
taskkill -f -im MasterHelper.exe
taskkill -f -im studentmain.exe
sc stop TDNetFilter
