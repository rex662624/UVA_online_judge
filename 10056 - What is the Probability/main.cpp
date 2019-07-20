/*
p * q ^ (x - 1) + p * q ^ (n + x - 1) + p * q ^ (2 * n + x - 1)... 
=>�Ĥ@����x�ӤH��Ӫ����v�O�ex-1�ӤH���SĹ�A���LĹ�F �C �ĤG����x�ӤH��Ӫ����v�O�e�@��n�ӤH���SĹ+�o�@��x-1�ӤH�SĹ
�L�a�żƤ��� 
https://zh.wikipedia.org/wiki/%E7%AD%89%E6%AF%94%E6%95%B0%E5%88%97#%E7%95%B6-1%3Cq%3C1%E6%99%82%EF%BC%8C%E7%AD%89%E6%AF%94%E6%95%B8%E5%88%97%E7%84%A1%E9%99%90%E9%A0%85%E4%B9%8B%E5%92%8C
https://wikimedia.org/api/rest_v1/media/math/render/svg/fe7f47fb1f16675e27b9a1ec4e03c45a02b7110f
( p * q ^ (x - 1) ) * ( 1 + q ^ n + q ^ (2 * n)... ) =  ( p * q ^ (x - 1) ) * ( 1 / (1 - q ^ n) ) 

*/
#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;



int main()
{

	int problem = 0;
	
	cin >> problem;
	
	for(int i = 0 ; i <problem ; i++)
	{
	
		int num_players = 0 , win_player;
		double prob = 0.0;
		
		cin>>num_players>>prob>>win_player;
		
		float ans ;
		if(prob == 0)
			ans = 0;
		else
			ans = (prob*pow(1-prob,win_player-1))*(1/(1-(pow((1-prob),num_players))));//#include <cmath>
		
		cout<<fixed<<setprecision(4)<< ans <<endl;//#include <iomanip> 
		//setprecision(4) vs stew(4) vs fixed<<setprecision(4)
		//setprecision(4)�O�q�D0��ƶ}�l���U�� 
	
	}

}



