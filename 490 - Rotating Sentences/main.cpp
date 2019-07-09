#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char word1[105][105] = {0,};
	char word2[105][105] = {0,};
	int linecount = 0,maxlength = 0;
	
	while(gets(word1[linecount]))//注意char array用gets 要include，string用getline。 
	{
		if(strlen(word1[linecount])>maxlength)
            maxlength = strlen(word1[linecount]);
        linecount++;
	
	} 
	for( int i = 0 ; i < maxlength ; i++ )
	{
		for( int j = 0 ; j < linecount ; j++ )
		{
			if(i>=strlen(word1[linecount-1-j]))
                cout<<" ";
            else
                cout<<word1[linecount-1-j][i];
			
			
		}
		cout<<endl;
		
	}
	

}
