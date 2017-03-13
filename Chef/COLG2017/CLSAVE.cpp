#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,s,sum=0;
		cin >> n >> s;
		int exp[n];
		for(int i = 0;i<n; i++){
			cin >> exp[i];
			sum += exp[i];
		}
		
		(sum > (s/2)) ? cout << "No" : cout << "Yes";
		cout  << newl;		
	}
	
return 0;
}
