#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		long long n,k, sc=0, tc=0;
		cin >> n >> k;
		
		if(k==0)
			tc = n;
		
		else {
			sc =  n/k;
			tc = n%k;
		}
		
		cout << sc << " " << tc  << newl;
		
		
	}		
		
	
return 0;
}
