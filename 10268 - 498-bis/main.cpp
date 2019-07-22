#include <iostream>

using namespace std;
 int a[1000000];

int main()
{
	
	int x = 0;
	while(cin>>x)
	{
		int n ;
		//============read input
		for(n = 0 ; ; n++)
		{
		
			cin>>a[n];
			
			if(getchar()=='\n')
				break;
		
		}	
		
		//===========solve
		//cout<<n<<endl;
		long long int sum = 0,acc_x = 1;
		
		for( int i = n-1;i>=0;i--)//常數項會被微分掉 所以an不用作 
		{
			sum += (long long)a[i]*(n-i)*acc_x;//注意前面要(long long) 不然就是所有type都宣告long long  因為int相乘會overflow 
			//cout<<a[i]<<"*"<<i<<"*"<<acc_x<<endl;
			acc_x = acc_x * x ;
			
		}
		cout<<sum<<endl;
		//cout<<"==================="<<endl;
	}
	
} 
