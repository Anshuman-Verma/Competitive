#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,count=0;
		cin >> n;
		int a[n];
		for(int i = 0; i<n ; i++){
			cin >> a[i];
			for(int j = i-1; j>=0; j--){
				if((a[i]^a[j])==0)
					count++;
			}
		}
		
		
		/*for(int i =0; i<n-1; i++){
			for(int j = i+1 ; j<n; j++){
				if((a[i]^a[j])==0)
					count++;
			}
		}*/
		
		cout << count << newl;
	}
		
	
return 0;
}
