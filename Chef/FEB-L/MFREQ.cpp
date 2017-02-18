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
		
	
	
	while(m--){
		int l,r,k,flag = 0,tnum=-2,tcount;
		cin >> l >> r >> k;
		
		vector<int> subval(n);
		subval.assign(val.begin() +l-1, val.begin()+r);
		
		/*cout << "subarray formed is:" << newl;
		for(int i = 0;  i<subval.size(); i++)
			cout <<  subval[i]  << " ";  */

		for(int i = 0;  i<subval.size()-k+1 && !flag; i++){
			if(tnum == subval[i])
				continue;
			tnum = subval[i];
				
			tcount = count(subval.begin()+i, subval.begin()+i+k,tnum);
			//cout << tnum << "--num " << tcount << "--count " << newl;
			if(tcount==k)
				flag = 1;
		}
			
		cout << ((flag) ? tnum : -1 ) << newl;
		
		
	}		
	
return 0;
}
