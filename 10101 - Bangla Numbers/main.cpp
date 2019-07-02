#include <iostream>
#include <iomanip>

using namespace std;

void trans(long long number) {
	static long long m[4] = {10000000, 100000, 1000, 100};
	string x[4] = {"kuti", "lakh", "hajar", "shata"};
	int i;

	for(i = 0; i < 4; i++) {
		if(number >= m[i]) {
			trans(number/m[i]);
			number %= m[i];

			 
			cout<<" "<<x[i];
		}
	}
	if(number!=0)
		cout<<" "<<number;
}

int main() {

	long long number;

	int index = 1;
	while(cin>>number) {
		cout<<setw(4)<<index++<<".";

		if(number == 0)
			cout<<" 0";
		else
			trans(number);
		cout<<endl;
	}


}
