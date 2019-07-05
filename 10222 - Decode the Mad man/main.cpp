#include <iostream>

using namespace std;

int main()
{
	string table = "`1234567890-=qwertyuiop[]\\asdfghjkl;\'zxcvbnm,./" ;
	string word;
	
	while( getline(cin,word) )
	{
		char output[2000];
		for(int i = 0; i < word.length(); i++)
		{
			char now = tolower(word.at(i));
			if(now == ' ')
				output[i] = now;
			else 
			for(int j = 0 ; j<table.length();j++)
			{	
				if(now==table.at(j))
				{
					output[i] = table.at(j-2);
					break;
				}	
			}
		}
		
		output[word.length()]='\0'; 
		cout << output<<endl;
	}


} 
