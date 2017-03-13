#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,k;
	cin >> n >> k;
	long long ans = 1;
	int i, street[n];
	
	for(i =  0; i<n; i++)
		cin >> street[i];
		
	for(i = n-1; i>0; i-=k)
		ans*=street[i];
		
	cout << ans%MODULO << newl;
	
return 0;
}
