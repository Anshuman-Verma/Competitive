#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

bool isSorted(int q[], int n){
	for(int i = 1; i<n; i++)
		if(q[i] < q[i-1])
			return false;
	return true;
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int q;
	cin >>  q;
	while(q--){
		int n, flag = 1;
		cin >> n;
		int a[n];
		for(int i =0; i<n; i++)
			cin >> a[i];
		
		for(int i = n-1;  i>=1; i--){
			if(abs(a[i]-a[i-1])==1)
			{
				if(a[i] < a[i-1]){
					a[i] = a[i] + a[i-1];
					a[i-1] = a[i] - a[i-1];
					a[i] = a[i] - a[i-1];
				}
			}
		}
		
		isSorted(a,n) ?  cout << "Yes" : cout << "No";
		cout <<  newl;
	}		
		
		
	
return 0;
}
