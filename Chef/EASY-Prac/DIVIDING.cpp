#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	long  n, temp;
	unsigned long long sum = 0ULL;
	cin >> n;
	unsigned long long rsum = (n*(n+1ULL))/2;
	while(n--){
		cin >> temp;
		sum+=temp;
	}
	
	(rsum == sum) ? cout << "YES" : cout <<  "NO";
	
return 0;
}
