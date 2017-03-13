#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long dec = n,ones = 0;
		int rem;
		while(n>0){
			rem = n%2;
			if(rem)
				ones++;
			n = n/2;
		}
		
		(ones%2==0) ? cout << "Varad" : cout << "Abizer";
		cout << newl;
		
	}
	
return 0;
}
