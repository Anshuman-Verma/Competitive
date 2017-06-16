#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		long long a, b,c,d,ans=10000000000000,counter=0;
		cin >> a >> b >> c >> d;
		
		while(1){
			if(a>b)
				a+=c;
			else if(b>a)
				b+=d;
				
			ans = min(ans, abs(a-b));
			counter++;
			if(counter>1000000000)
				break;
		}
		cout << ans << newl;
	}		
		
		
	
return 0;
}
