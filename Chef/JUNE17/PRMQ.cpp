#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

bool prime[1000005];
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
}


long long int F(int L,int R,int X,int Y, vector<int> val ) {

	long long int result = 0;
	for(int  i = X ; i<=Y ; i++ )  {
	    if( prime[i] ) {
	        for(int j = L ; j <= R ; j++) {
	              long long int number = val[j];
	              long long int exponent = 0;
	              while( number % i == 0 ) {
	                 exponent++; 
	                 number /= i;
	              }
	              result += exponent;
	          }
	     }
	 }
 	return result;
}



int main(){
	std::ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	vector<int> awesome;
	for(int i = 0; i<n; i++){
		int ip; cin >> ip;
		awesome.push_back(ip);
	}	
	
	int q;
	cin >> q;
	while(q--){
		int l,r,x,y;
		cin >> l >> r >> x >> y;
		SieveOfEratosthenes(y);
		cout << F(l-1,r-1,x,y,awesome) << newl;
	}
		
	
return 0;
}
