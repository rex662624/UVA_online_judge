#include <iostream>
#include <cmath>
#include <stdint.h>
using namespace std;

int main()
{
	int64_t  army1 = 0;//long long int �`�N���n��uint64_t �]�� army1-army2<0�|�X��(�i���ܭt��) 
	int64_t  army2 = 0;
	while(cin>>army1>>army2)//�o�̳B�z���F!=EOF 
	{
		int64_t diff = abs(army1-army2);
		cout<<diff<<endl;
	}
}
