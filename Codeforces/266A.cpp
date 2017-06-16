#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,ans = 0;
	string s;
	cin >> n >> s;

	char cur = s[0];
	for(int i = 1; i<n; i++){
		if(s[i]==cur)
			ans++;
		else cur = s[i];
	}

	cout << ans << newl;
	
return 0;
}
