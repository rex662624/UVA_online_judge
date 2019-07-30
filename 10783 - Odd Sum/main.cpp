#include <iostream>

using namespace std;

int main()
{
	
	int cases = 0 ;
	cin>>cases;
	for(int i = 0 ; i< cases ; i ++)
	{
	
		int lower = 0 ; 
		int upper = 0 ;
		
		cin>>lower>>upper;
		int now = 0;
		
		if(lower%2==0)
			now = lower+1;
		else
			now = lower;
		
		int sum = 0;
		for(now; now <= upper ; now+=2)
			sum +=  now ;	
		cout<<"Case "<<i+1<<": "<<sum<<endl; 
	
	}
	
	
	
} 
