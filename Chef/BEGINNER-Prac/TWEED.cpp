#include<bits/stdc++.h>

#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		int heap[n];
		
		for(int i = 0; i<n ;i ++)
			cin >> heap[i];
		
		if(s == "Dee" && n==1 && heap[0]%2==0)
			cout << "Dee" << endl;
		
		else cout << "Dum" << endl;
		}
		
	
return 0;
}
