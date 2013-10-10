#include <string>
#include <iostream>

using namespace std;

char getLetter(string str);

void morseToTextMode(int argc, char **argv)
{
	string morseIn;
	
	for(int i = 1; i < argc; i++)
	{
		morseIn = argv[i];
		cout << getLetter(morseIn);
	}
	cout << endl;
}

char getLetter(string str)
{
	if(str == ".-")
		return 'A';
	else if(str == "-...")
		return 'B';
	else if(str == "-.-.")
		return 'C';
	else if(str == "-..")
		return 'D';
	else if(str == ".")
		return 'E';
	else if(str == "..-.")
		return 'F';
	else if(str == "--.")
		return 'G';
	else if(str == "....")
		return 'H';
	else if(str == "..")
		return 'I';
	else if(str == ".---")
		return 'J';
	else if(str == "-.-")
		return 'K';
	else if(str == ".-..")
		return 'L';
	else if(str == "--")
		return 'M';
	else if(str == "-.")
		return 'N';
	else if(str == "---")
		return 'O';
	else if(str == ".--.")
		return 'P';
	else if(str == "--.-")
		return 'Q';
	else if(str == ".-.")
		return 'R';
	else if(str == "...")
		return 'S';
	else if(str == "-")
		return 'T';
	else if(str == "..-")
		return 'U';
	else if(str == "...-")
		return 'V';
	else if(str == ".--")
		return 'W';
	else if(str == "-..-")
		return 'X';
	else if(str == "-.--")
		return 'Y';
	else if(str == "--..")
		return 'Z';
	else if(str == "-----")
		return '0';
	else if(str == ".----")
		return '1';
	else if(str == "..---")
		return '2';
	else if(str == "...--")
		return '3';
	else if(str == "....-")
		return '4';
	else if(str == ".....")
		return '5';
	else if(str == "-....")
		return '6';
	else if(str == "--...")
		return '7';
	else if(str == "---..")
		return '8';
	else if(str == "----.")
		return '9';
	else if(str == ".-.-.-")
		return '.';
	else if(str == "--..--")
		return ',';
	else if(str == "..--..")
		return '?';
	else if(str == ".----.")
		return '\'';
	else if(str == "-.-.--")
		return '!';
	else if(str == "-..-.")
		return '/';
	else if(str == "-.--.")
		return '(';
	else if(str == "-.--.-")
		return ')';
	else if(str == ".-...")
		return '&';
	else if(str == "---...")
		return ':';
	else if(str == "-.-.-.")
		return ';';
	else if(str == "-...-")
		return '=';
	else if(str == ".-.-.")
		return '+';
	else if(str == "-....-")
		return '-';
	else if(str == "..--.-")
		return '_';
	else if(str == ".-..-.")
		return '"';
	else if(str == "...-..-")
		return '$';
	else if(str == ".--.-.")
		return '@';
	else if(str == "/")
		return ' ';
	else
		return '?';
}
