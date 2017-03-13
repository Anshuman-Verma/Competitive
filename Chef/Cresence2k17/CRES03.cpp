#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,k;
	string s;
	cin >> n >> s >> k;
	
	for(int i = 0; i<n; i++){
		char temp;
		
		if(s[i]>=65 && s[i] <= 90){
			if(s[i]+k>90)
				s[i]+=k-26;
			else s[i]+=k;
			temp = s[i];
			cout << temp;
		
		}
		
		else if(s[i]>=97 && s[i] <= 122){
			if(s[i]+k>122)
				s[i]+=k-26;
			else s[i]+=k;	
			temp = s[i];
			cout << temp;
		}
		else cout << s[i];
	}		
	cout << newl;
return 0;
}
