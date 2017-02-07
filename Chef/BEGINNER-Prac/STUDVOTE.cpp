#include<bits/stdc++.h>

#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,k,ans=0;
		cin >> n >> k;
		
		int vote[n];
		int count[n] = {0};
		
		for(int i = 0; i<n ; i++){
			cin >> vote[i];
			count[vote[i]-1]++;
			
		}
		
		for(int i = 0; i<n; i++){
			if(vote[i] == i+1)
				continue;
			
			else if(count[i]>=k)
				ans++;	
		}
		
			
		cout << ans << endl;
		
	}
		
	
return 0;
}
