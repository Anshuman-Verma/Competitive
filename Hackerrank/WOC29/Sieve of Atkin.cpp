#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007
#define ll long long 

using namespace std;

void sieve_atkins(ll int n, ll int start)
{	
	ll int count = 0;
    vector<bool> is_prime(n + 1);
    is_prime[2] = true;
    is_prime[3] = true;
    for (ll int i = 5; i <= n; i++)
    {
        is_prime[i] = false;
    }
    ll int lim = ceil(sqrt(n));
    for (ll int x = 1; x <= lim; x++)
    {
        for (ll int y = 1; y <= lim; y++)
        {
            ll int num = (4 * x * x + y * y);
            if (num <= n && (num % 12 == 1 || num % 12 == 5))
            {
                is_prime[num] = true;
            }
            num = (3 * x * x + y * y);
            if (num <= n && (num % 12 == 7))
            {
                is_prime[num] = true;
            }
 
            if (x > y)
            {
                num = (3 * x * x - y * y);
                if (num <= n && (num % 12 == 11))
                {
                    is_prime[num] = true;
                }
            }
        }
    }
    for (ll int i = 5; i <= lim; i++)
    {
        if (is_prime[i])
        {
            for (ll int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
 
 
    for (ll int i = start; i <= n; i++)
    {	ll int temp = i;
    	int flag = 0;
         if (is_prime[i])
         {
         	flag = 1;
     		while(temp!=0&&flag){
				if(!is_prime[temp%10])
					flag = 0;
				temp =  temp/10;
			}
         }
         if(flag)count++;
    }
    cout <<  count << newl;
}


int main(){
	std::ios::sync_with_stdio(false);
	
		ll int first, last;
		cin >> first >> last;
		sieve_atkins(last,first);
		
	
return 0;
}
