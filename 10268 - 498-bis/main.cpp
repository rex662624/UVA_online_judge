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
		
		for( int i = n-1;i>=0;i--)//�`�ƶ��|�Q�L���� �ҥHan���Χ@ 
		{
			sum += (long long)a[i]*(n-i)*acc_x;//�`�N�e���n(long long) ���M�N�O�Ҧ�type���ŧilong long  �]��int�ۭ��|overflow 
			//cout<<a[i]<<"*"<<i<<"*"<<acc_x<<endl;
			acc_x = acc_x * x ;
			
		}
		cout<<sum<<endl;
		//cout<<"==================="<<endl;
	}
	
} 
