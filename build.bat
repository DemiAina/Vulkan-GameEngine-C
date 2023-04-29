@echo off


call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"


SET includes=/Isrc /I%VULKAN_SDK%/Include 
SET links=/link /LIBPATH:%VULKAN_SDK%/Lib vulkan-1.lib user32.lib Shell32.lib

cl /EHsc /Z7 /Fe"main" %includes% %defines% src/main.c %links%
