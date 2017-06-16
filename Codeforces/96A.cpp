#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	string s;
	cin >> s;

	char cur = s[0];
	int count = 1,flag = 0;
	for(int i = 1; i<s.length(); i++){
		if(s[i]==cur)
			count++;
		else{
			cur = s[i];
			count = 1;
		}
		if (count >=7)
			flag = 1;
	}
		
	flag ? cout << "YES" : cout << "NO";
	
return 0;
}
