#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n,k, op=2, ingcount, temp,contribution; //op=2 :all, op=1 :some , op=0: sad
		cin >> n >> k;
		vector<int> ingpresent(k+1);
		
		for(int j = 0; j<n; j++){
			cin >> ingcount;
			contribution = 0;
			for(int i =0; i<ingcount; i++){
				cin >> temp;
				if(!ingpresent[temp]){
					ingpresent[temp] = true;
					contribution++;
				}
			}
			if(!contribution)
				op = 1;
		}
		
		
		for(int i = 1; i<k+1; i++)
			if(!ingpresent[i])
				op = 0;
		
	
		if(op==2)
			cout <<  "all";
		else if(op==1)
			cout << "some";
		else 
			cout << "sad";
		cout << newl;
		
	}		
		
	
return 0;
}
