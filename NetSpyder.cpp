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

using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
    while (true)
    {
        system("cls");
        string Ans;
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "       _   _ _____ _____ ____  ______   ______  _____ ____  By c0met    \n";
        cout << "       | \\ | | ____|_   _/ ___||  _ \\ \\ / /  _ \\| ____|  _ \\   \n";
        cout << "       |  \\| |  _|   | | \\___ \\| |_) \\ V /| | | |  _| | |_) |  \n";
        cout << "       | |\\  | |___  | |  ___) |  __/ | | | |_| | |___|  _ <   \n";
        cout << "       |_| \\_|_____| |_| |____/|_|    |_| |____/|_____|_| \\_\\ \n\n";

        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "       [ 1 ]  Own Network Info       [ 2 ]  Scanning Ports\n\n";
        cout << "       [ 3 ]  Own Info Computer      [ 4 ]  Firewall Info\n\n       [ 5 ]";
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "  Quit \n\n";
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("      c0met@DESKTOP:~$ ");
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cin >> Ans;
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
        if (Ans == "1")
        {
            OwnNet();
        }
        else if (Ans == "2")
        {
            ScanPorts();
        }
        else if (Ans == "3")
        {
            OwnInfoComputer();
        }
        else if (Ans == "4")
        {
            FirewallInfo();
        }
        else if (Ans == "5")
        {
            break;
        }
    }

    
    
    
    
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY);
	return 0;
}