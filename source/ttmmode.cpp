#include <string>
#include <iostream>

using namespace std;

string getMorse(char str);

void textToMorseMode(int argc, char **argv)
{
	string textIn;
	
	for(int i = 1; i < argc; i++)
	{
		string textIn = argv[i];
		
		for(int j = 0; j < textIn.length(); j++)
		{
			cout << getMorse(textIn[j]) << " ";
		}
		
		if(i == argc - 1)
			break;
		else
			cout << " / ";
	}
	cout << endl;
}

string getMorse(char str)
{
	if(str == 'A')
		return ".-";
	else if(str == 'B')
		return "-...";
	else if(str == 'C')
		return "-.-.";
	else if(str == 'D')
		return "-..";
	else if(str == 'E')
		return ".";
	else if(str == 'F')
		return "..-.";
	else if(str == 'G')
		return "--.";
	else if(str == 'H')
		return "....";
	else if(str == 'I')
		return "..";
	else if(str == 'J')
		return ".---";
	else if(str == 'K')
		return "-.-";
	else if(str == 'L')
		return ".-..";
	else if(str == 'M')
		return "--";
	else if(str == 'N')
		return "-.";
	else if(str == 'O')
		return "---";
	else if(str == 'P')
		return ".--.";
	else if(str == 'Q')
		return "--.-";
	else if(str == 'R')
		return ".-.";
	else if(str == 'S')
		return "...";
	else if(str == 'T')
		return "-";
	else if(str == 'U')
		return "..-";
	else if(str == 'V')
		return "...-";
	else if(str == 'W')
		return ".--";
	else if(str == 'X')
		return "-..-";
	else if(str == 'Y')
		return "-.--";
	else if(str == 'Z')
		return "--..";
	else if(str == '0')
		return "-----";
	else if(str == '1')
		return ".----";
	else if(str == '2')
		return "..---";
	else if(str == '3')
		return "...--";
	else if(str == '4')
		return "....-";
	else if(str == '5')
		return ".....";
	else if(str == '6')
		return "-....";
	else if(str == '7')
		return "--...";
	else if(str == '8')
		return "---..";
	else if(str == '9')
		return "----.";
	else if(str == '.')
		return ".-.-.-";
	else if(str == ',')
		return "--..--";
	else if(str == '?')
		return "..--..";
	else if(str == '\'')
		return ".----.";
	else if(str == '!')
		return "-.-.--";
	else if(str == '/')
		return "-..-.";
	else if(str == '(')
		return "-.--.";
	else if(str == ')')
		return "-.--.-";
	else if(str == '&')
		return ".-...";
	else if(str == ':')
		return "---...";
	else if(str == ';')
		return "-.-.-.";
	else if(str == '=')
		return "-...-";
	else if(str == '+')
		return ".-.-.";
	else if(str == '-')
		return "-....-";
	else if(str == '_')
		return "..--.-";
	else if(str == '"')
		return ".-..-.";
	else if(str == '$')
		return "...-..-";
	else if(str == '@')
		return ".--.-.";
	else
		return "?";
}
