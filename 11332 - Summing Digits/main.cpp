#include <iostream>

using namespace std;

int main()
{

	long long int number;
	
	while(cin >> number&&number!=0)
	{
		while(number>=10)//�p�G��10�٤j�A�N�~��q�C��[�찪�� 
		{
			number = number/10 + number%10 ;
		}
		
		cout<<number<<endl;
	}
} 
