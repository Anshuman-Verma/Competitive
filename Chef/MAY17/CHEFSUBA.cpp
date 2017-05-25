#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,k,p,start,end;
	string query;
	cin >> n >> k >> p;
	k--;
	vector<int> barr(2*n),sum(n);
	for(int i = 0; i<n; i++){
		cin >> barr[i];
		if(!i)
			sum[i] = barr[i];
		else
			sum[i] = barr[i] + sum[i-1];
		barr[n+i] = barr[i];
	}
	for(int i  = 0; i<sum.size();  i++)
		cout << sum[i] <<  " ";
	cout << newl;
	
	cin >> query;
	start = n;
	end = 2*n-1;
	for(int i = 0; i<query.length(); i++){
		int ones = 0,maxones = 0;
		if(query[i]=='!'){
			start--;
			end--;
		}
		else{
			for(int j = start; j<=end && j+k<=end;  j++){
				barr[j] ? ones = barr[j+k] - barr[j] + 1 : ones = barr[j+k] - barr[j];
				cout << ones  << " ones" << newl;
				maxones = max(maxones,ones);
			}
			cout <<  maxones  << newl;
		}
	}
	
return 0;
}
