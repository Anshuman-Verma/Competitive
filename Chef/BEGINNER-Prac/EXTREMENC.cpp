#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    const int ace = t;
    while(t--){
    
    	int n,i,cc = t+1;
    	cin >> n;
    	long int encarr[n],A[n],B[n];
    	for(i =0; i<n ; i++)
    		cin >> encarr[i];
    	
    	i = 0;
		while(i<n){
			string binary = bitset<32>(encarr[i]).to_string(); 		// conversion of binary to string
			string b = binary.substr(0,16);
			string a = binary.substr(17,32);
			A[i] = bitset<16>(a).to_ulong();				// convert to unsigned long decimal from string
			B[i] = bitset<16>(b).to_ulong();
		i++;	
		}
		
		printf("Case %d:\n",ace-t);
		for(int j  = 0; j<n; j++)
			cout << A[j] << " ";
		cout << endl;
		for(int j=0; j<n; j++)
			cout << B[j] << " ";	
		cout << endl;
		
	}
    
    
    
return 0;
}
