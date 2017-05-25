#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,k;
	cin  >> n >> k;
	int no[n];
	while(k--){
		for(int i =0; i<n; i++)
			cin >> no[i];
		next_permutation(no,no+n);
		for(int i =0; i<n; i++)
			cout << no[i] << " ";
		cout << newl;
	}		
		
		
	
return 0;
}
