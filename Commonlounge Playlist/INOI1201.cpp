#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;


int main(){
	std::ios::sync_with_stdio(false);
	
	long long  n,min=99999999,pcsum=0,max=0,maxt;
	cin >> n;
	int time[n][3];
	for(int i =0; i<n; i++){
		cin >> time[i][0] >> time[i][1] >> time[i][2];
		pcsum+=time[i][0];
		if(time[i][1]+time[i][2]<min)
			min = time[i][1]+time[i][2];
		if(time[i][1]+time[i][2] > max){
			max = time[i][1]+time[i][2];
			maxt = max + time[i][0];
		}
	}
	maxt > min+pcsum ? cout << maxt : cout << min+pcsum;
	
return 0;
}
