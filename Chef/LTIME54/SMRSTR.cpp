#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);	
	
	int t;
	cin >> t;
	while(t--) {
		int n,q, ip;
		unsigned long long x = 1;
		cin >> n >> q;
		vector<int> val(n), que(n);
		for(int i = 0; i<n; i++) {
			cin >> val[i];
			if(x < 1e9)x*=val[i];
		}
		for(int i = 0; i<q; i++) {
			cin >> ip;
			cout << ip/x  << " ";
		}
		
		cout << newl;
	}


return 0;
}
