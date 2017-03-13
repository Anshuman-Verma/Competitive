#include<bits/stdc++.h>

using namespace std;

int main(){
	
	std::ios::sync_with_stdio(false);
	int t,n;
	cin >>  t;
	
	while(t--){
		
		cin >> n;
		int A[n];
		int due = 0,flag = 1;
		for(int i = 0; i<n; i++){
			cin >> A[i];
			
			if(A[i]==0&&flag==1){
				flag = false;
				due+=1100;
			}
			
			else if(flag==0&&A[i]==0)
				due += 1100;	
			
			
			else if(flag==0&&A[i]==1)
				due+=100;
		}
		
		cout << due << endl;
		
	}
	
	
return 0;
}
