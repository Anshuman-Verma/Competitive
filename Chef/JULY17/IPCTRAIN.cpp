#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

struct data {
	int d,t,s;
};

bool comp(data a, data b){
	if(a.d < b.d)
		return a.d < b.d;
	else
		return (a.d == b.d && a.s > b.s);
}

int main(){
	std::ios::sync_with_stdio(false);

	int t;
	cin >> t;
	while(t--) {
		int n, totaldays;
		cin >> n >> totaldays;
		
		vector<data> info(n);
		for(int i = 0; i<n; i++) {
			cin >> info[i].d >> info[i].t >> info[i].s;
		}
		sort(info.begin(), info.end(), comp);

		for(int i = 0; i<n; i++) {
			cout << info[i].d << " " << info[i].t << " " << info[i].s << newl;
		}
		
		unsigned long long  tsad = 0;
		int minIndex = 0, pos = 0;
		for(int day = 1; day <= totaldays; day++) {
			if(info[pos].t == 0)
				pos++;
			if(info[pos].d <= day)
				info[pos].t--;

			

		}

	}

return 0;
}
