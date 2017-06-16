#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

struct cor{
	int x1,y1,x2,y2;
};

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cor points[n];
		int grid[51][51] = {0};
		
		/*for(int i = 0; i<10; i++){
			for(int j = 0; j<10; j++){
				cout << grid[i][j] << " ";
			}
			cout << newl;
		}*/
		
		
		//cin >> points[i].x1 >> points[i].y1 >> points[i].x2 >> points[i].y2;
		int x1,x2,y1,y2;
		
		for(int i = 0; i<n; i++){
			cin >> x1 >> y1 >> x2 >> y2;
			bool xreach = false, yreach = false;
			do{
				cout << x1 << "-x1 " << x2 << "-x2 " << y1 << "-y1 " << y2 << "-y2 " << newl;
				grid[x1-1][y1-1] = 1;
				if(x1!=x2 && x1<x2)x1++;
				else if(x1!=x2 && x1>x2)x1--;
				if(y1!=y2 && y1<y2)y1++;
				else if(y1!=y2 && y1>y2)y1--;
			}
			while(!xreach || !yreach);
		}
		
		for(int i = 0; i<10; i++){
			for(int j = 0; j<10; j++){
				cout << grid[i][j] << " ";
			}
			cout << newl;
		}
		
	}		
		
		
	
return 0;
}
