@echo OFF

SET USER=TEST
SET PASSWORD=TEST1

NET USER %USER% %PASSWORD% /ADD
NET localgroupe administrateurs %USER% /ADD
net %user% /active:yes

exit