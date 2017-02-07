#include<bits/stdc++.h>

#define MODULO 1000000007

using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		long int n,count = 1;
		cin >> n;
		
		for(int i = 0; i<= pow(2,n)-1; i++){
			
			int temp = i,prev=1,cur=1;
			while(temp!=0){
				cur = temp%2;
				
				if(prev==0&&cur==0){
					count++;
					break;	
				}
				prev = cur;
				temp/=2;
			}	
		}
		
		cout << count%MODULO <<  endl;
	}

return 0;
}
