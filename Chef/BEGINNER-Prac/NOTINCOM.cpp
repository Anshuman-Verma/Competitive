#include<bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);

	int t;
	cin >> t;
	while(t--){
		int n,m,temp;
		cin >>  n >> m;
		
		set<int> A,B;
		std::set<int>::iterator it;		
		set<int>:: iterator temp1;
		
		for(int i = 0;i < n ; i++){
			cin >> temp;
			A.insert(temp);
		}
		
		for(int j = 0;  j<m; j++){
			cin >> temp;
			B.insert(temp);
		}
		
	/*	for(it = A.begin(); it!=A.end(); it++)
			cout << *it << "lul\n";	*/
		
		
		// finding commons
		int count = 0;
		for(it = A.begin(); it!=A.end(); it++){
			temp1 = B.find(*it);
			
			if(*temp1==*it && temp1!=B.end())
				count++;
		}
		
		cout << count << endl;
	}

return 0;
}
