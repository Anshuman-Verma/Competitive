#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long int ans = n/2;
		ans *= (n+1);
		cout << ans << newl;
	}	
		
	
return 0;
}
