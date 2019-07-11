#include <iostream>
#include <algorithm>
using namespace std;

int main()
{ 
	int number=0;
	while(cin>>number)
	{
		int N[3001];
		int flag[3001] = {0, };
		
		for(int i = 0 ; i < number ; i++)
		{
			
			cin >> N[i];
		
		}
		
		for(int i = 0 ; i < number-1 ; i++)
		{
			int diff = abs(N[i]-N[i+1]);
			if(diff<3001)
			{
				flag[diff] = 1 ;
			}
		}
		
		int result = 0;
		for(int i = 1 ; i <= number-1 ; i++)//注意是從1開始到number-1 
		{
			
			if(flag[i]==0)result=-1;
		
		}
		
		if(result==0)
			cout<< "Jolly"<<endl; 
		else
			cout<< "Not jolly"<<endl;
	
	}

} 
