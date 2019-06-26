#include <iostream>
#include <cmath> //abs()
#include <algorithm> //sort()

using namespace std;

bool cmp(int a ,int b){
	return (a<b);
}

int main(){
	int number_of_case = 0;
	cin>>number_of_case;
	
	int relative[number_of_case][500];
	int answer[number_of_case];
	int number_of_relative[number_of_case];
	
	for(int i =0; i < number_of_case;i++){
		
		cin>>number_of_relative[i];
		
		for(int j = 0;j<number_of_relative[i];j++){
			cin>>relative[i][j];
		}
		
		sort(&(relative[i][0]),&(relative[i][number_of_relative[i]]),cmp);
		
		int mid = relative[i][number_of_relative[i]/2];//取中位數一定是距離大家的最小值 
		
		//cout<<mid<<endl;
		
		int temp_ans = 0;
		for(int j = 0;j<number_of_relative[i];j++){
			temp_ans+=abs(relative[i][j]-mid);
		}
		answer[i] = temp_ans;
		
		
	}
	
	for(int i =0; i < number_of_case;i++){
		cout<<answer[i]<<endl;
	}
	
	
	
}
