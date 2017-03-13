#include<bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		long int n,girls=0,flag=0,fb=-1;
		cin  >> n;
		long int students[n];
		
		for(int i = 0 ; i<n; i++)
			cin >> students[i];
			
			
		for(int i = 0; i<n; i++){
			if(students[i]==1)
				girls++;
			else if(students[i]==0&&flag==0){
				fb = i;
				flag = 1;
			}
			
		}
		
		if(fb!=-1)
		cout << girls - fb << endl;
		else if(fb==-1)
		cout << 0 << endl;
	}

return 0;
}
