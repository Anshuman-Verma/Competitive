#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int>);

int main(){
	
	vector<int> v;
		
	int* p = v.data();
	*p = 10;
	++p;
	*p = 20;
	p[2] = 100;
	
	printVector(v);
	
return 0;	
}

void printVector(vector<int> a){
	for(int i = 0; i<a.size(); i++)
		cout << a[i] << endl;
}
