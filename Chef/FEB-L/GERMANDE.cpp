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
		const int size = 2*o1*o2;
	
		vector<bool> r(size);
		vector<int> sum(size);
		 for(i = 0; i<size/2; i++){
			int temp;
			cin >> temp;
			r[i] = temp;
			r[(size)/2+i] = r[i];
		}  
		
	// --END OF INPUTS--
	
		int maxOnes=0,start = 0;
		
		while(start < o2){
			
			int onesRep=0;
			for(int i = start; i < size/2; i+=o2){
				int Ones = 0;
				
				//Ones = count(r.begin()+i, r.begin()+i+o2, true);  //  causes TLE
				
				if(Ones>o2/2)
					onesRep++;
			
			}
			if(onesRep>maxOnes)
				maxOnes = onesRep;
			
		start++;
		}
		
		cout << ((maxOnes > o1/2) ? "1" : "0") << "\n";

		
	}
	
return 0;
}
