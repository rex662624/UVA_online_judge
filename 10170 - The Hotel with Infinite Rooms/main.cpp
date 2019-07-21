#include <iostream>

using namespace std;

int main()
{

	long long D;
	int S;
	
	while(cin>>S>>D)
	{
	
		int nowPeople = S;
		while((D-nowPeople)>0)
		{	
		
			D = D-nowPeople ;
			nowPeople++;
		}
		
		cout<<nowPeople<<endl;
	} 
	
	

} 
