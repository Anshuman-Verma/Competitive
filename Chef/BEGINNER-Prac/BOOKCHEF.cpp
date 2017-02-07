#include<bits/stdc++.h>

using namespace std;

struct post{
		int f,p;
		string s;
	};

int main(){

	std::ios::sync_with_stdio(false);
	int n,m;
	cin  >> n >> m;
	
	int sf[n];
	for(int i = 0; i<n; i++)
		cin >> sf[i];
	
	int f[m],p[m];
	string s[m];
	for(int i = 0; i<m; i++)
		cin >> f[i] >> p[i] >> s[i];
		
	std::sort(f.begin(),f.end());
	
	
return 0;
}
