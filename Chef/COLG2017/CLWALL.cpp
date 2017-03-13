#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,m,u;
	cin >> n >> m >> u;
	int w=0,r=0,b=0,k=0;
	
	char wall[n][m];
	
	while(u--){
		int x1,y1,x2,y2;
		char colour;
		cin >> x1 >> y1 >> x2 >> y2 >> colour;
		
		for(int hor = x1-1; hor<x2; hor++){
			for(int ver = y1-1; ver<y2; ver++){
				
				if(wall[hor][ver]=='R')
					r--;
				else if(wall[hor][ver]=='B')
					b--;
				else if(wall[hor][ver]=='K')
					k--;
					
				wall[hor][ver] = colour;
				
				if(colour=='R')
					r++;
				else if(colour=='B')
					b++;
				else if(colour=='K')
					k++;
			}
		}
	}
	
	w = n*m - (r + b + k);
	cout << w << " " << r << " " << b << " " << k;
	
return 0;
}
