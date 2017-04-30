#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		double l,d,s,c;
		cin >> l  >> d >> s >> c;
		s*=pow(c+1,d-1);
		s >= l ? cout << "ALIVE AND KICKING" : cout << "DEAD AND ROTTING";
		cout << newl;
	}		
		
		
	
return 0;
}
