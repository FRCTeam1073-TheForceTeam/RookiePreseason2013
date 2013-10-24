@echo off
rem thank you stack overflow for this atroicious line below
set curr_date=%DATE:~10,4%-%DATE:~4,2%-%DATE:~7,2%
mkdir %curr_date:-=%
cd %curr_date:-=%
mkdir %username%
cd %user_name%
explorer .