#pragma once
#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

vector <int> PreDefines{ 0, 90, 40, 55 };
vector <string> FirstCommandLibrary{"help", "getch", "customDataType", "help @s"};
vector <string> LanguageCommands{ "print", "prompt host", "pm", "DP.data //extract" };
vector <string> Comment{ "+" };
vector <string> CommandLibraryshowcase{ // Descriptions of every Basic Command
"help\nStringValue: HelpCmd\nUsage:\n1: help\n2: help <command>",
"\ngetch\nStringValue: GetChildren\nUsages:\n1: getch --type command <command>\n2: getch <command>\n3: getch $%main%$ <command>",
"customDataType\nStringValue: CDTCustom\nUsages:\n1: customDataType --type <type>\n"
};

vector <string> AvailableStorageLinks{"DatStorer", "BeastContainer", "CloudData", "Default storage\n"};