#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

struct way{
	int x,y,d;
};

int main(){
	std::ios::sync_with_stdio(false);
	
	
	int n;
	long long h=0,b=0;
	while(1){
		cin >> h >> b;
		if(h==-1 && b==-1)
			break;
		cin >> n;
		way path[n];
		for(int i = 0; i<n; i++)
			cin >> path[i].x >> path[i].y >> path[i].d;
		long long ans=0,temp=0;
		for(int i = 0;  i<h; i++){
			temp=0;
			for(int x = 0; x<n; x++){
				if(i<=(path[x].y+path[x].d) && i>=(path[x].y-path[x].d))
					temp++;
			}
			ans = max(ans,temp);
		}
		cout << ans << newl;
	}
	
return 0;
}
