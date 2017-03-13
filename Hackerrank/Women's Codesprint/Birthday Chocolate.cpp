#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector <int>  choc(n);
	
	for(int i =0 ; i<n; i++)
		cin >> choc[i];

	int ans = 0, sum,d,m;
	cin >> d >>  m;
		
	for(int i = 0; i<n-m+1; i++){
		sum = 0;
		for(int j = i;  j<m+i; j++){
			sum+=choc[j];
		}
		if(sum==d)
			ans++;
	}
	
	cout << ans << newl;
	
return 0;
}
