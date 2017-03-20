#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int  t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int flag = 0,pos;
		pos = s.find("010");
		if(pos < s.length())
			flag = 1;
		pos = s.find("101");
		if(pos < s.length())
			flag = 1;
		
		flag ? cout << "Good" : cout << "Bad";
		cout << newl;
	}	
		
	
return 0;
}
