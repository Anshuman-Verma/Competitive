#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,m;
	cin >> n >> m;
	vector<int> val(n);
	int preComp[n][3];		//making this for reducing query time, building time->O(n), each query in O(1) !
										
	for(int i = 0;i<n; i++)
		cin >> val[i];
	
	// preComp[i][0] = element at i index
	// preComp[i][1] = start of element i's index
	// preComp[i][2] = end of element at i's index lol, too much to take ?
	
	preComp[0][0] = val[0];
	preComp[0][1] = 0;
	
	
	//setting start of all elements
	for(int i = 1; i<n ; i++){
		preComp[i][0] = val[i];
		
		if(val[i] == val[i-1])
			preComp[i][1] = preComp[i-1][1];
		
		else{
			preComp[i][1] = i;
			preComp[i-1][2] = i-1;
		}
	}
	
	//setting end of all elements
	preComp[n-1][2] = n-1;
	
	for(int i = n-2; i>=0; i--)
		if(val[i] == val[i+1])
			preComp[i][2] = preComp[i+1][2];
	
	// checking preComp Matrix
	/*for(int i = 0; i<n; i++)
		cout << preComp[i][0] << " " << preComp[i][1] << " " << preComp[i][2] << newl;*/
	
	
	// evaluating queries in O(1) time
	while(m--){
		int l,r,k, mid,start, end ;
		cin >> l >> r >> k;
		l--; r--;
		mid = (r+l)/2;
		start = preComp[mid][1];
		end = preComp[mid][2];
		
		if(start<l)
			start = l;
		if(end > r)
			end = r;
			
		(end - start +1 >= k) ? cout << preComp[mid][0] : cout << "-1" ;
		
		cout << newl;	
	}	
		
	
return 0;
}
