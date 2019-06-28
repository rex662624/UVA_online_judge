#include <iostream>
#include <cmath>
#include <stdint.h>
using namespace std;

int main()
{
	int64_t  army1 = 0;//long long int 注意部要用uint64_t 因為 army1-army2<0會出錯(可能變負的) 
	int64_t  army2 = 0;
	while(cin>>army1>>army2)//這裡處理掉了!=EOF 
	{
		int64_t diff = abs(army1-army2);
		cout<<diff<<endl;
	}
}
