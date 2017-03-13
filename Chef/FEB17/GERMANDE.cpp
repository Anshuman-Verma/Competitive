#include<bits/stdc++.h>
#include<bitset>
#define MODULO 1000000007
 
using namespace std;
 
int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int o1,o2,i;
		cin >> o1 >> o2;
		int n = o1*o2;
		
		int sum[2*o1*o2] = {0}, r[n];
		for(i=0; i<n; i++){
			int temp;
			cin >> temp;
			r[i] = temp;
			(i!=0 && i<n) ? sum[i] = temp+sum[i-1] : sum[i] = temp;
		}
		
		//EOI
		
		for(i = n;  i<2*n; i++)
			if(r[i-n])
				sum[i] = r[i-n] + sum[i-1];
			else
				sum[i]  = sum[i-1];
		
		// updating sum array
		
		//for(i = 0; i<2*n; i++)
		//	cout << sum[i] << " ";
		//cout << endl;
		
		int start = 0,maxOnes = 0;
		while(start<o2){
			int onesRep = 0;
			for(int j=start; j<n; j+=o2){
				
				int Ones =  abs(sum[j+o2] - sum[j]);
			//	cout << Ones << " lel ";
				if(Ones>o2/2)
					onesRep++;
			}
			if(maxOnes<onesRep)
				maxOnes = onesRep;
			
			start++;
		}
		
		
		cout << ((maxOnes>o1/2) ? "1" : "0" )<< endl;
		
	}
	
return 0;
} 
