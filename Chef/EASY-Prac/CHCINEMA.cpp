#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		long long N,M,Z,L,R,B,reserved;
		cin >> N >> M >> Z >> L >> R >> B;
		long long a = min(N * M, Z + L + R + min(B, N * (M + 1) - L - R >> 1));
		long long ans = min(a, N * (M + 1 >> 1));
		cout << ans  << newl;
		
	}
		
		
	
return 0;
}
