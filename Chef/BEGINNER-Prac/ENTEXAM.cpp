#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 100000 + 1;

int Tn, n, k, e, m, aij;
long long sum[MAXN], my_sum, ans;

int main (int argc, char * const argv[]) {
//	freopen("2.in.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin >> Tn;
	while (Tn--) {
		cin >> n >> k >> e >> m;
		for(int i = 1; i < n; i++) {
			sum[i] = 0;
			for(int j = 1; j <= e; j++) {
				cin >> aij;
				sum[i] += aij;
			}
		}
		sort(sum + 1, sum + n);
		reverse(sum + 1, sum + n);
		my_sum = 0;
		for(int i = 1; i < e; i++) {
			cin >> aij;
			my_sum += aij;
		}
		ans = sum[k] + 1 - my_sum;
		if (ans < 0)
			cout << 0 << endl;
		else if (ans > m)
			cout << "Impossible" << endl;
		else 
			cout << ans << endl;		
	}
    return 0;
}
