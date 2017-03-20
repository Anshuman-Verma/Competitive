#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >>  t;
	while(t--){
		string s;
		cin >> s;
		int lascii,rascii,lapin = 1;
		vector<int> left(125);
		vector<int> right(125);
		for(int i = 0; i<s.length()/2; i++){
			lascii = s[i];
			left[lascii]++;
			rascii = s[s.length()-i-1];
			right[rascii]++;
		}
		
		for(int i = 97; i <= 122 && lapin; i++)	
			if(left[i]!=right[i])
				lapin = 0;
		
		lapin ? cout << "YES" : cout << "NO";
		cout << newl;		
		
		
	}	
		
	
return 0;
}
