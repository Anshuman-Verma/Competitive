#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int r;
	cin >> r;
	while(r--){
		int l;
		string report;
		cin >> l >> report;
		char last = 'A';
		int flag = 1, h=0,  t=0;
		for(int i = 0; i<l && flag; i++){
			
			if(report[i]=='T' && last=='T')
				flag = 0;
			
			if(report[i]=='H' && last=='H')
				flag = 0;
				
			if(report[i]=='H'){
				h++;
				last = 'H';
			}
			else if(report[i]=='T'){
				t++;
				last = 'T';
			}
			
			
			if(!h && t)
				flag = 0;
				
		}
		if(h-t)
			flag = 0;
		flag ? cout << "Valid" : cout << "Invalid";
		cout << newl;
	}		
		
		
	
return 0;
}
