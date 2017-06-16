#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		
		long long n,two=1,mim=1e18;
		cin >> n;
		while(two<1e18){
			mim = min(mim, abs(n-two));
			two*=2;
		}
		cout <<  mim << newl;
	}
		
	
return 0;
}
