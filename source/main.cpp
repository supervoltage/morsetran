#include "ttmmode.h"
#include "mttmode.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	if(argc <= 1)
	{	
		cout << "ERROR: No input present\n";
		return 0;
	}
	
	string helpChk = argv[1];
	
	if(helpChk == "--help" || helpChk == "-h")
	{
		cout << "Usage: " << argv[0] << " [TEXT]\n" << "       " <<
				argv[0] << " [MORSE]\n";
		cout << "Translate text into morse code or morse code into text.\n\n";
		cout << "  -h, --help\t\tdisplay this help\n\n";
		
		cout << "Examples:\n\t" << argv[0] << " example text\n";
		cout << "\t" << argv[0] <<
				" . -..- .- -- .--. .-.. .  / -- --- .-. ... .\n\n";
		cout << "Report bugs and suggestions to <ubervoltage@gmail.com>\n";
		return 0;
	}
	
	char prFind;			//determine if program should run in
	prFind = argv[1][0];	//morse-to-text mode or text-to-morse mode
	
	if(prFind == '.' || prFind == '/' || prFind == '-')
		morseToTextMode(argc, argv);
	else
		textToMorseMode(argc, argv);
	
	return 0;
}
