#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

void printtop(){
	
	cout << "..O..";;
}

void printmid(){
	
	cout << "O.o.O";
}


int main(){
	std::ios::sync_with_stdio(false);
	
		int r,c, count = 1;
		cin >> r >> c;
		
		for(int i = 0; i<r*3; i++){
			for(int j = 0; j<c;  j++){
				if(count==2)
					printmid();
				else 
					printtop();
				
			}
			cout << newl;
			count++;
			if(count==3)
				count = 0;
		}

return 0;
}
