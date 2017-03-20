#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n1,n2,n3, ip, count = 0;
	cin >> n1 >> n2 >> n3;
	vector<int>	data(1000000);
	for(int i = 0; i<n1+n2+n3; i++){
		cin >> ip;
		data[ip]++;
		if(data[ip]==2)
			count++;
	}
	
	cout << count << newl;
	for(int i = 0; i<data.size(); i++ )
		if(data[i]>1 && data[i])
			cout << i << newl;
	
return 0;
}
