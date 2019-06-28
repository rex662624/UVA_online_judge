#include <iostream>
#include <cstdlib> 
#include <cstdio>

using namespace std;

int main()
{
	int number1 = -1,number2 = -1;
	
	while( cin>>number1>>number2 )
	{
		
		if(number1 == 0 && number2 == 0)break;
		
		int acc = 0;//仓璸秈 
		int carrycount=0;
		while(number1 != 0 || number2 != 0 ) 
		{
			int temp1 = 0, temp2 = 0;
			
			temp1=number1%10;//程计 
			temp2=number2%10;//程计
			
			if(temp1+temp2+acc >= 10)
			{
				carrycount++;
				acc = 1;
			}
			else
				acc = 0; 
				
			number1/=10;
			number2/=10;
			//cout<<number1<<","<<number2<<endl;
			 
		}
		if(carrycount == 0)
			cout << "No carry operation." << endl;
		else if (carrycount == 1)
			cout <<"1 carry operation."<<endl;
		else
			cout << carrycount << " carry operations."<<endl;
		
		//cout<<number1<<","<<number2<<endl;	
		
	} 
}
