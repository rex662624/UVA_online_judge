#include <iostream>

using namespace std;

int compute(int number)
{

	if(number == 1) 
		return 1;//深度+1 
		
	if(number%2!=0)
		return 1+compute(number*3+1);//深度=1+叫下去的深度
	else
		return 1+compute(number/2);
		
	
	 
	
}


int main()
{
	int i, j ;
	
	while(cin>>i>>j)
	{
		int big,small;
		if(i>j)
		{	
			big = i;
			small = j;	
		}	
		else
		{
			big = j;
			small = i;
		} 
		int max=-1;
		for(int k = small ; k <= big ; k++)
		{
			int temp = compute(k);
				
			max= temp>max?temp:max;
				
		}
		
		cout<<i<<" "<<j<<" "<<max<<endl;	
	}
	
	
}
