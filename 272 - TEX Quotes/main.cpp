#include <iostream>

using namespace std;

int main()
{

	string line;
	
	int quote = 0 ;//因為可能有跨行的"" 所以宣告在這裡 
	while(getline(cin , line))
	{
		for(int i = 0 ; i < line.length() ; i++)
		{
			
			if( line[i] == '"' && quote == 0 )
			{
				cout<<"``";
				quote = 1;
			}
			else if( line[i] == '"' && quote == 1 )
			{
				cout<<"''";
				quote = 0;
			}
			else
			{
				cout<<line[i];
			}
			
		}
		cout<<endl;
		
	}

}
