#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--) {
		long long k, a, b, ans;
		cin >> k >> a >> b;
		
		if (k/2.0 == abs(a-b))
			ans = 0;
			
		else {
			ans = min(abs(a-b)-1, abs(k-abs(a-b))-1);
		}
		cout << ans << newl;
	}
		
return 0;
}
