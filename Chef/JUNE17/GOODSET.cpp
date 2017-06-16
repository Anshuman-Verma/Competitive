#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x = 500;
		for(int i = 0; i<n; i++)
			cout << x-- << " ";
		cout << newl;
	}	
		
		
	
return 0;
}
