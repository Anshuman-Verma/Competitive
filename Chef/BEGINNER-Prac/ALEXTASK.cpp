#include<bits/stdc++.h>

using namespace std;

int gcd(long long a,long long b){
	return (b != 0) ? gcd(b, a % b) : a;
}


int main(){

	int t;
	cin >>  t;
	while(t--){
		int n;
		cin >> n;
		
		long long time[n];
		for(int i = 0; i<n; i++)
			cin >> time[i];
		
		long long ans = 1e18;
		for(int i = 0; i<n; i++){
			for(int j = i+1 ; j<n; j++){
				ans = min(ans, (time[i]*time[j])/gcd(time[i],time[j]));	
			}
			
		}
		
		cout << ans << endl;
	}
	

return 0;
}
