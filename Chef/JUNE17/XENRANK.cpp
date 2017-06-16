#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		long long u,v,sum;
		cin >> u >> v;
		sum = u+v;
		long long srank = sum%2 ? sum*((sum+1)/2) : (sum+1)*(sum/2);
		cout << srank + u +1<< newl;
	}		
		
		
	
return 0;
}
