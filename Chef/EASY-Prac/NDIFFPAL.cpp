#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	string ans = "abc";
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		for(int i = 0; i < n/3; i++)
			cout << ans;
		
		cout << ans.substr(0, n%3);
		
		cout << newl;
	}		
		
		
	
return 0;
}
