#include "ttmmode.h"
#include "mttmode.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	if(argc <= 1)
	{	
		cout << "ERROR: No input present\n";
		return 0;
	}
	
	char prFind;			//determine if program should run in
	prFind = argv[1][0];	//morse-to-text or text-to-morse
	
	if(prFind == '.' || prFind == '/' || prFind == '-')
		morseToTextMode(argc, argv);
	else
		textToMorseMode(argc, argv);
	
	return 0;
}
