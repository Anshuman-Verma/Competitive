#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		int count = 0,ccount=0;
		for(int i = 0; i<b.length()-a.length(); i++)
			if(b.substr(i,i+a.length())==a)
				count++;
		
		cout << count << newl;
		
	}	
		
	
return 0;
}
