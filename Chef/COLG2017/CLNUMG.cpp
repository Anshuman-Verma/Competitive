#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,m;
		long long ans=0;
		cin >> n >> m;
		
		ans += pow(2,n+m-1); 	// MSB = 1;
		for(int i = 0; i<n-1; i++)
			ans += pow(2,i);
		
		cout << ans << newl;
	}		
	
return 0;
}
