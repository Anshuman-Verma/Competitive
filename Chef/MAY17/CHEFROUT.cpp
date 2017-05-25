#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		string ip;
		int cook = 0,eat = 0,sleep=0,flag = 1;
		cin >> ip;
		for(int i =0;  i<ip.length(); i++){
			if(ip[i]=='C')
				cook = 1;
			else if(ip[i]=='E')
				eat = 1;
			else if(ip[i]=='S')
				sleep = 1;
			if(ip[i]=='C' && sleep)
				flag = 0;
			else if(ip[i]=='E' && sleep)
				flag = 0;
			else if(ip[i]=='C' && eat)
				flag = 0;
			
		}
		
		flag ? cout << "yes" : cout << "no";
		cout  << newl;
	}		
		
		
	
return 0;
}
