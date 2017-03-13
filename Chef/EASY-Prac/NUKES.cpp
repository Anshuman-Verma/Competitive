#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int a,n,k,satisfied;
	cin >> a >> n >> k;
	vector<int> reactor(k);
	
	while(a--){
		satisfied = 1;
		reactor[0]++;
		if(reactor[0]>n)
			satisfied = 0;
		
		if(!satisfied){
			for(int i = 0; !satisfied && i<k; i++){
				if(reactor[i]<=n)
					satisfied = 1;
					
				else if(!satisfied){
					if(i!=k-1){
						reactor[i] = 0;
						reactor[i+1]++;
					}
					else 
						reactor[i] = 0;
					
				}	
			}	
		}	
	}		
	for (int i  =0; i<reactor.size(); i++)
		cout << reactor[i] << " ";
	
	
return 0;
}
