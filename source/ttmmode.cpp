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
	if(str == 'A' || str == 'a')
		return ".-";
	else if(str == 'B' || str == 'b')
		return "-...";
	else if(str == 'C' || str == 'c')
		return "-.-.";
	else if(str == 'D' || str == 'd')
		return "-..";
	else if(str == 'E' || str == 'e')
		return ".";
	else if(str == 'F' || str == 'f')
		return "..-.";
	else if(str == 'G' || str == 'g')
		return "--.";
	else if(str == 'H' || str == 'h')
		return "....";
	else if(str == 'I' || str == 'i')
		return "..";
	else if(str == 'J' || str == 'j')
		return ".---";
	else if(str == 'K' || str == 'k')
		return "-.-";
	else if(str == 'L' || str == 'l')
		return ".-..";
	else if(str == 'M' || str == 'm')
		return "--";
	else if(str == 'N' || str == 'n')
		return "-.";
	else if(str == 'O' || str == 'o')
		return "---";
	else if(str == 'P' || str == 'p')
		return ".--.";
	else if(str == 'Q' || str == 'q')
		return "--.-";
	else if(str == 'R' || str == 'r')
		return ".-.";
	else if(str == 'S' || str == 's')
		return "...";
	else if(str == 'T' || str == 't')
		return "-";
	else if(str == 'U' || str == 'u')
		return "..-";
	else if(str == 'V' || str == 'v')
		return "...-";
	else if(str == 'W' || str == 'w')
		return ".--";
	else if(str == 'X' || str == 'x')
		return "-..-";
	else if(str == 'Y' || str == 'y')
		return "-.--";
	else if(str == 'Z' || str == 'z')
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
