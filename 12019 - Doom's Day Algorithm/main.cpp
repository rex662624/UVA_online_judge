#include <iostream> 

using namespace std;

int main()
{

	//according to the problem: 1/6:Thursday, so 1/1 is Saturday , 1/0 is Friday 
	int startday = 5 ;
	int number_of_date = 0;
	int day_of_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string days[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	
	cin >> number_of_date;
	
	for(int i = 0 ; i < number_of_date ; i++)
	{
		int month = 0 , day = 0 ;
		int result = startday ;
		
		cin >> month >> day;
		
		for(int j = 0 ; j < month-1 ; j++)
		{
			result += day_of_month[j];
		}
		
		result += day;
		
		cout<< days[(result-1)%7]<<endl;	
		
	}

}
