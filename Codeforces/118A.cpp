#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	string s;
	cin >> s;

	for(int i = 0; i<s.length(); i++){
		
		if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='o' || s[i]=='O' || s[i]=='i' || s[i]=='I' || s[i]=='u' || s[i]=='U' || s[i]=='y'||s[i]=='Y')
			continue;
		if(s[i]>='A' && s[i]<='Z')
			s[i]+=32;
		cout << '.' << s[i];
	}

return 0;
}
