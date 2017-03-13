#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,  m;
	cin >> n >> m;
	
	vector<int> val(n);
	vector<long long> sum(n,0); 
	for(int i = 0; i<val.size(); i++){
			int temp;
			cin >> temp;
			val[i] = temp;
			if(i==0)
				sum[i] = temp;
			else sum[i] = temp + sum[i-1];
		}
		
	/*cout << "sum array:" << newl;
	for(int x = 0; x<sum.size(); x++)
		cout << sum[x] <<" ";
	cout << newl;  */
	
	while(m--){
		int l,r,k,flag = 0,lul;
		double tnum=-2,tcount;
		cin >> l >> r >> k;
		
		vector<int> subval(n);
		subval.assign(sum.begin() +l-1, sum.begin()+r);
		
		vector<int> tempval(n);
		tempval.assign(val.begin() +l-1, val.begin()+r);
		
		for(int i = 0;  i<subval.size()-k+1 && !flag; i++){
			
			if(lul == tempval[i])
				continue;
			tnum = subval[i];
			lul = tempval[i];
			tcount = subval[i+k-1] - subval[i] + lul;

			//tcount = count(subval.begin()+i, subval.begin()+i+k,tnum);		causes TLE
			//cout << tnum << "--num " << tcount << "--count " << lul << "--lul " newl;

			if((tcount/(lul))==k)
				flag = 1;
		}
			
		cout << ((flag) ? lul : -1 ) << newl;
		
		
	}		
	
return 0;
}
