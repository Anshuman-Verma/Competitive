#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		int flag = 1,i,test = 0;
		int chap[n],temp[n] = {0};
		
		for(i = 0 ; i<n ; i++){
				cin >> chap[i];
				if(chap[i]<=n)temp[chap[i]-1]++;
		}
				
		i = 0;
			
		while(i<n){
			
			if(chap[i]>n || temp[i]!=1){
					flag = 0;
					break;
			}
			
			if(chap[i]!=i+1)test = 1;
			
									
			i++;
		}	
				
		if(test==0)flag=0;
		
		if(flag==1)cout << "yes" << endl;
		else cout << "no" << endl;
	
		
		
		
	}

return 0;
}
