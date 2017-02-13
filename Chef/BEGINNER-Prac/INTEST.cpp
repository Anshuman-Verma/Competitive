#include<bits/stdc++.h>

#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
		int n,k,count = 0;
		cin >> n >> k;
		for(int i =0; i<n; i++){
			int temp;
			cin >> temp;
			if(temp%k==0)count++;
		}
		
		cout << count << endl;
	
return 0;
}
