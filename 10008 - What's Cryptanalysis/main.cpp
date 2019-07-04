#include <iostream> 

using namespace std;

int main()
{
	int line = 0;
	
	cin>>line;
	cin.ignore();//deal with \n
	int count[26]={0,}; 
	
	for(int i = 0 ; i < line ; i++)
	{
		
		string sentence;
		getline(cin,sentence);
		
		for(int j = 0; j < sentence.length() ;j++)
		{
			
			char now = sentence.at(j);
			
			if((now <= 'Z' && now >= 'A' )||(now <= 'z' && now >= 'a' ))
			{
				count[tolower(now)-'a']++;
			}
		}
		 
	
	}
	/*
	for(int i =0;i<26;i++)
	{
		if(count[i]!=0)
		{
			char out = 'A' + i ;
			
			cout<<out<<" "<<count[i]<<endl;
		} 
	
	}
	*/
	/*********************************** 
	/*1.先找出所有字母的count 的max 
	/*2.從max走到1，並按照A~Z順序看下去 
	/*
	/***********************************/ 
	int max=-1;
	
	for(int i = 0 ; i < 26 ; i++)
	{
		if(max<count[i])
			max = count[i];
	
	}
	
	for(int i = max ; i > 0 ; i--)
	{
		for(int j = 0 ; j < 26 ; j++)
			if(count[j] == i)
				cout<<(char)('A'+j)<<" "<<count[j]<<endl;
		
	}
	

}
