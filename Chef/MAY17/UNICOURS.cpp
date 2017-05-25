#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,ip,max=0,ans;
		cin >> n;
		for(int i = 0; i<n; i++){
			cin >> ip;
			if(ip>max)
				max = ip;
		}
		ans = n-max;
		cout << ans << newl;
	}		
		
		
	
return 0;
}
