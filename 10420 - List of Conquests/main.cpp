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
			cin>>country[i];//�����aŪ�i�� 
			getline(cin,garbage);//��᭱���W�r���ަ��X�ӳ�Ū�i��
			//cout<<country[i]<<endl;
			
		}
		
		sort(country,country+number);//����country��sort
		
		string last = country[0];//last �O�ΨӬݤW�@���ݪ�string�O�֡A�~���D�n���n��X 
		int total = 0;
		
		for(int i = 0 ; i < number ; i++)
		{
			if(last != country[i])//��ܶ}�l�ݤ@�ӷs��country�A�e�@�ӭn�έp�ÿ�X 
			{
				cout<<last<<" "<<total<<endl;
				total=1;//total���s�p���+1 
			}
			else
			{
				total++;
			}
			
			last = country[i];//�]�w�W�@�Ӭݪ� 
			
		}
		
		cout<<last<<" "<<total<<endl;//�W������for���|��X�̫�@��country		
		
	}
	


}
