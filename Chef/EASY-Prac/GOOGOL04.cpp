#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
	int N;
	cin>>N;
	vector<int> ht(N), array(N, INT_MAX);
	int max_val = 0;
	vector<int>::iterator it;
	for(int i=0;i<N;i++) {
		cin>>ht[i];
		it = upper_bound(array.begin(), array.end(), ht[i]);
		if(it!=array.end()) {
			*it = ht[i];
			if(it-array.begin()+1 > max_val)
				max_val = it-array.begin() + 1;
		}
	}
	cout<<N-max_val;
	return 0;
} 
