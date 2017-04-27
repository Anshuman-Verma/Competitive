#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n, depth=0, depthpos=1, maxseq=0, maxpos=1, cons = 0, count = 0, flag = 0;
	cin >> n;
	vector<int> brac(n+1);
	for(int i =1; i<=n; i++){
		cin >> brac[i];
		
		if(brac[i]==1){
			count++;
		}	
		else{
			if(count>depth){
			depth = count;
			depthpos = i-1;
			}
			count = 0;
		}
		
		if(brac[i]==1){
			flag++;
			cons++;
		}
		else{
			if(flag>0)flag--;
			if(flag)cons++;
			if(!flag){
				if(cons > maxseq){
					maxseq =  cons;
					maxpos = i-cons+1;
					cons = 0;
				}
			}
		}
		
	}


		cout << depth  << " " << depthpos << " " << maxseq << " " << maxpos << newl;
		
	
return 0;
}
