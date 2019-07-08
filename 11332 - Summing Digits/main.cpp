#include <iostream>

using namespace std;

int main()
{

	long long int number;
	
	while(cin >> number&&number!=0)
	{
		while(number>=10)//如果比10還大，就繼續從低位加到高位 
		{
			number = number/10 + number%10 ;
		}
		
		cout<<number<<endl;
	}
} 
