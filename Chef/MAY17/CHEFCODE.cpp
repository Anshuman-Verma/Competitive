#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;



unsigned long long sub(vector<unsigned long long> arr, int n, int  k)
{
    /* Number of subsequences is (2**n -1)*/
    unsigned int opsize = pow(2, n),neg=0;
 	
    /* Run from counter 000..1 to 111..1*/
    for (long long counter = 1; counter < opsize; counter++)
    {	
    	unsigned long long ans = 1;
        for (int j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
            if (counter & (1<<j)){
                //cout << arr[j] << " ";
                ans*=arr[j];
            }
        }
        if(ans>k)
            	neg++;
        /*cout << newl;
        cout <<neg << " n" << newl;*/
    }
    return opsize-neg-1;
}

int main(){
	std::ios::sync_with_stdio(false);
	
	unsigned  long long n,k,greater = 0,ans = 0;
	cin >> n >> k;
	vector<unsigned long long> no(n);
	for(int i = 0;  i<n; i++)
		cin >> no[i];		
	//sort(no.begin(), no.end());
	cout << sub(no,n,k) << newl;;
    
return 0;
}
