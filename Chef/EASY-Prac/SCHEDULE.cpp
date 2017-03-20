#include <bits/stdc++.h>
using namespace std;
char sl[1000123];
void te() {
	int n, money;
	scanf("%d%d", &n, &money);
	scanf("%s", sl);
	vector<int> blocks;
	for(int i = 0; i < n; ++i) {
		int cnt = 1;
		while(i + 1 < n && sl[i] == sl[i+1]) {
			++cnt;
			++i;
		}
		blocks.push_back(cnt);
	}
	
	
	/*for(int i = 0; i<blocks.size(); i++)
		cout << blocks[i] << " ";
	cout << endl;*/
	
	int low = 1, high = n;
	while(low < high) {
		int size = (low + high) / 2;
		int need = 0;
		if(size == 1) {
			int zero = 0, one = 0;
			for(int i = 0; i < n; ++i) {
				if(sl[i] == '1')
					++zero;
				else
					++one;
				swap(zero, one);
			}
			need = min(one, zero);
		}
		else {
			for(int i = 0 ; i <blocks.size(); i++) {
				// [0, size] -> 0
				// [size + 1, 2 * size + 1] -> 1
				need += blocks[i]/ (size + 1);
			}
		}
		if(need <= money) high = size;
		else low = size + 1;
	}
	printf("%d\n", low);
}
int main() {
	int T;
	scanf("%d", &T);
	while(T--) te();
}
