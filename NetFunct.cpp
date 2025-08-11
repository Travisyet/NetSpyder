/*
 * Software name : NetSpyder
 * author : Comet
 * Copyright (C) 2025 Comet.
 */
#include "NetFunct.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>

// Own Network Info
void OwnNet()
{
	system("cls");
	system("arp -a");
	system("pause");
}

// Scanning Ports
void ScanPorts()
{
	system("cls");
	system("netstat -ano | find /i \"listening\"");
	system("pause");
}

// Own Info Computer
void OwnInfoComputer()
{
	system("cls");
	system("SYSTEMINFO");
	system("pause");
}

// Firewall info
void FirewallInfo()
{
	system("cls");
	system("netsh advfirewall show currentprofile");
	system("pause");
	
}