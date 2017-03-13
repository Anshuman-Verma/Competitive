#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int g;
		cin >> g;
		while(g--){
			int i,n,q,heads, tails;
			cin >> i >> n >> q;
			
			if(n%2==0){
				heads = n/2;
				tails = n/2;
			}
			
			else{
				if(i==1){
					heads = n/2;
					tails = n/2 +1;
				}
				else{
					heads = n/2+1;
					tails = n/2;
				}
				
			}
			(q==1) ? cout << heads : cout << tails;
			cout << newl;
		}
		
		
		
	}	
		
	
return 0;
}
