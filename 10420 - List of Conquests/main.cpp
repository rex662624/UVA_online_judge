#include <iostream>
#include <algorithm> 
 
using namespace std;

int main()
{

	int number = 0;
	string country[2000];
	while(cin>>number)
	{
		for(int i = 0 ; i < number ; i++)
		{
			string garbage;
			cin>>country[i];//先把國家讀進來 
			getline(cin,garbage);//把後面的名字不管有幾個都讀進來
			//cout<<country[i]<<endl;
			
		}
		
		sort(country,country+number);//先把country做sort
		
		string last = country[0];//last 是用來看上一次看的string是誰，才知道要不要輸出 
		int total = 0;
		
		for(int i = 0 ; i < number ; i++)
		{
			if(last != country[i])//表示開始看一個新的country，前一個要統計並輸出 
			{
				cout<<last<<" "<<total<<endl;
				total=1;//total重新計算並+1 
			}
			else
			{
				total++;
			}
			
			last = country[i];//設定上一個看的 
			
		}
		
		cout<<last<<" "<<total<<endl;//上面那個for不會輸出最後一個country		
		
	}
	


}
