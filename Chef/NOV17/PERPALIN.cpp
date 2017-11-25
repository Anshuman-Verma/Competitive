#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);	
	
	int t;
	cin >> t;
	while(t--) {
		int n, p;
		cin >> n >> p;
		if(p <3 || n < 3)
			cout << "impossible" << newl;
		else {
			int rep = n/p;
			string s = "a";
			for(int i = 0; i<p-2; i++)
				s+='b';
			s+='a';
			for(int i = 0; i<rep; i++)
				cout << s;
			cout << newl;
		}
	}	
return 0;
}
