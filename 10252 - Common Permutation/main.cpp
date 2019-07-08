#include <iostream>
#include <algorithm>
#include <cstring>
#include "stdio.h"

using namespace std;

int main()
{

	string line1,line2;
	while(getline(cin,line1) && getline(cin,line2))//char array¤£¯à¥Îgetline 
	{
		//cout<<"---"<<line1<<endl<<"---"<<line2<<endl;
		sort(line1.begin(),line1.end());
		sort(line2.begin(),line2.end());
		
		for (int i = 0, j = 0; i < line1.length() && j < line2.length();)
		{
			if (line1.at(i) == line2.at(j)) {
				cout<<line1.at(i);
				i++;
				j++;
			}
			else if (line1.at(i)  > line2.at(j) )
				j++;
			else
				i++;
		
		}
		
		cout<<endl;
		
	}   
	
} 
