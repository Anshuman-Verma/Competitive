#include <bits/stdc++.h>
using namespace std;
void te() {
	int n;
	scanf("%d", &n);
	int one = 0;
	for(int i = 0; i < n * n; ++i) {
		int x;
		scanf("%d", &x);
		one += x;
	}
	int answer = 0;
	one -= n;
	for(int i = n - 1; i >= 1; --i)
		if(one > 0) {
			one -= 2 * i;
			++answer;
		}
	printf("%d\n", answer);
}
int main() {
	int T;
	scanf("%d", &T);
	while(T--) te();
}
 
