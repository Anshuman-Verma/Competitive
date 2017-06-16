#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		
		int n,m,temp;
		cin >> n >> m;
		for(int i = 0; i<2*m; i++)
			cin >> temp;
			
		(n%2) ? cout  << "no" : cout << "yes";
		cout << newl;
	}	
		
		
	
return 0;
}
