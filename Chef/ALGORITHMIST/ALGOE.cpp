#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,r,g;
		cin >> n >> r >> g;
		if(g==0)
			cout << r;
		else if(r==0)
			cout << g;
		else{
			n-=r;
			while(n!=1){
				n--;
				g--;
			}
			cout << g;
		}
			
		cout << newl;
		
	}	
		
	
return 0;
}
