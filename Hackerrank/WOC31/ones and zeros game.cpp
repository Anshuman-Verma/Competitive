#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;


int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin  >> t;
	while(t--){
		int n, count = 0, prev, next, rev,fow, flag = 0;
		cin >> n;
		vector<int> ip(n);
		for(int i =0; i<n ; i++)
			cin >>  ip[i];
		prev = ip[0];
		next = ip[2];
		
		for(int i = 1; i<n-1;i++){

			if(ip[i]==-1)
				continue;
							
			rev =  i-1;
			fow = i+1;
			
			while(ip[rev]==-1)
				rev--;
			prev =  ip[rev];
			
			while(ip[fow]==-1)
				fow++;
			next = ip[fow];
			
			if(prev==0  && next==0){
				flag =  !flag;
				ip[i] = -1;
				i--;
			}
			
			for(int i =0 ; i <n; i++)
				if(ip[i]!=-1)
					cout << ip[i] << " ";
				cout << newl;
			
				
		}
		!flag ? cout << "Bob" : cout << "Alice";
		cout << newl;
	}		
		
		
	
return 0;
}
