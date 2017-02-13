#include<bits/stdc++.h>

#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
		int t;
		cin >> t;
		
		while(t--){
			int a,b,c,d;
			cin >> a >> b >> c >> d;
		    long long ans = 0;
			
			for(int x = a; x<=b; x++){	
				int first = max(x+1,c);
				if(first <= d)
					ans += d - first +1;
			}
		cout << ans << endl;
		}
	
return 0;
}
