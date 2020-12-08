/*
	Including Framework Which uses other namespaces
*/
#include "framework.h"
/*
	TODO: Create more functions easily accessible through the cmd.
	TODO: Start working on some functions and parameter Handling
*/

#include "iogz.h"




/*
	PLANS:
		
		Create Accessible data vectors through the program
		Create Very light builds through defining Quickly
		Give it Quick Tools for easy development
		Give it a API
		Give it a User Prompt :done:
		Polish it
		give it a custom language
		create vector command
		create functions
		turn it into a prompt :done:
		make it fully windows :
*/


int main() {
	cout << "Data Handler Cmd line.\nCopyright (c) Kai-Builder 2020\n";
	
	while (true)
	{
		cout << ">>>";
		string command;

		cin >> command;
		std::cin.ignore();
		if (command == FirstCommandLibrary[0])
		{
			OnHelp();
		}
		else if (command == FirstCommandLibrary[1]) {
			onGetch();
		}
		else if (command == FirstCommandLibrary[2]) {

		}
		else if (command == FirstCommandLibrary[3])
		{
			OnHelp();
		}
		else if (command == Comment[0])
		{
			cout << "Comment.";
		}
		else if (command == LanguageCommands[0])
		{
			strt();
		}
		else {
			cout << "Unknown Command/Keyword, " << command << "\n\n";
		}
	}
	return 0;
}