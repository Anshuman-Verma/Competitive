#include<iostream>

int main(){

 int t;
std::cin >> t;

 while(t--){
 	 int n,m;
 	 std::cin >> n >> m;

 	 char A[n][m];

 	 // defining reservoir
 	 for(int i=0;i<0;i++){
 	 	for(int j = 0;j<m;j++){
 	 		std::cin >> A[i][j];
 	 	}
 	 }

 	 for(int x = 0;x<n;x++){
 	 	for(int y = 0;y<m-1;y++){
 	 		char temp = A[x][y];
 	 		std::cout << temp;
 	 		//if()
 	 	}
 	 }



 }


return 0;
}
