#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);

	int t;
	cin >> t;
	 while(t--) {
	 	long long n,b, ans = 0;
	 	cin >> n >> b;
	 	double mul = ceil( double(n / b) / double(2));
	 	long long x = n - (mul * b);
	 	ans = x * mul;

	 	cout << ans << newl;

	 }

return 0;
}