#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,k,ip,count=0,l=0,r=0;
	cin >> n >> k;
	vector<int> numbers;
	for(int i =0; i<n;  i++){
		cin >>  ip;
		numbers.push_back(ip);
	}
	
	sort(numbers.begin(), numbers.end());
	while(r<n){
		if(numbers[r]-numbers[l]>=k){
			count+=n-r;
			l++;	
		}
		
		else 
			r++;
		
	}
		
		
	cout <<  count << newl;
	
return 0;
}
