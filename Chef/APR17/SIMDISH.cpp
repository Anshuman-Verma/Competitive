#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	while(t--){
		int count = 0;
		string ing[4][2];
		for(int i = 0; i<4; i++)
			cin >> ing[i][0];
		for(int i =0; i<4;  i++)
			cin  >> ing[i][1];
			
		for(int i =0; i<4; i++){
			for(int j =0; j<4; j++)
				if(ing[i][0]==ing[j][1])
					count++;
		}
		
		count>=2 ? cout << "similar" : cout << "dissimilar";
		cout << newl;
	}	
		
	
	
return 0;
}
