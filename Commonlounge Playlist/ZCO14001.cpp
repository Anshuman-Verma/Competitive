#include<bits/stdc++.h>

#define newl "\n"
#define MODULO 1000000007

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int n,h, pos = 0, command, pickedup=0;
	cin >> n >>  h;
	vector<int> box(n);		
	
	for(int i =0 ; i<n; i++)
		cin >> box[i];
		
	do{
		cin >> command;
		if(command==1 && pos)
			pos--;
		else if(command==2 && pos!=n-1)
			pos++;
		else if(command ==3 && !pickedup  && box[pos]){
			box[pos]--;
			pickedup = 1;
		}
		
		else if(command==4 && pickedup && box[pos] <h){
			pickedup=0;
			box[pos]++;
		}
		
	}
	while(command);
	
	for(int i =0; i<n; i++)
		cout << box[i] << " ";
	
return 0;
}
