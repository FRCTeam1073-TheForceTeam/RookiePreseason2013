@echo off
rem thank you stack overflow for this atroicious line below
set curr_date=%DATE:~10,4%-%DATE:~4,2%-%DATE:~7,2%
mkdir %curr_date:-=%
cd %curr_date:-=%
mkdir %username%
cd %user_name%

cls
title Creating workspace for %username%... 
echo.
echo.
echo Your environment has been created, for your convenience please place your code for tonight's project in this directory. This makes it easy to get to your work even if you switch computers, and to check in on the cool stuff your friends are working on!
pause

explorer .
