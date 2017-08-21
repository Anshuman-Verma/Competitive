#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		vector<int> ip(n);
		
		int flag = 1, last = 0, mx=0;
		for(int i = 0; i<n; i++) {
			cin >> ip[i];
			if( abs(ip[i] - last) > 1 )
				flag = 0;
			last = ip[i];
			if(ip[i] > 7)
				flag = 0;
			mx = max(mx, ip[i]);
		}
		
		for(int i =0; i<=n/2; i++) {
			if(ip[i] != ip[n-i-1])
				flag = 0;
		}
		
		if(mx!=7)
			flag = 0;
		
		flag ? cout << "yes" : cout << "no";
			cout << newl;
		
	}
	
		
return 0;
}
