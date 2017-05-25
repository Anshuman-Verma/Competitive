#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int findOnes(vector<int>total, int limit,vector<int>v){
	int mu = 0;
	for(int i = 0; i+limit<total.size();  i++){
		int ones=0;
		if(v[i])
			ones = total[i+limit] - total[i] + 1;
		else 
			ones = total[i+limit] - total[i];
		mu = max(mu,ones);
	}
	return mu;
}

vector<int> rotateRight(vector<int> a){
	int end = a[a.size()-1];
	for(int i = a.size()-1; i>0; i--){
		a[i] = a[i-1];
	}
	a[0] = end;
	return a;
}

vector<int> evalSum(vector<int >a,  vector<int> bi){
	for(int i = 0; i<a.size();  i++)
		i ?  a[i] = a[i-1] +  bi[i] : a[i] = bi[i];
	return a;
}

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,k,p;
	string query;
	cin >> n >> k >> p;
	if(k>n)
		k=n;
	vector<int>barr(n),sum(n);
	for(int i = 0; i<n; i++){
		cin >> barr[i];
		!i ? sum[i] = barr[i] : sum[i] = barr[i] + sum[i-1];
	}
	cin >> query;
	for(int i =0; i<query.length(); i++){
		if(query[i]=='!'){
			barr = rotateRight(barr);
			sum =  evalSum(sum,barr);
		}
		else{
			cout << findOnes(sum,k-1,barr) << newl;
		}
	}
	
	
return 0;
}
