#include<iostream>

using namespace std;

int main(){
	

    int n,q,t;
    
    cin >> n >> q;
    t = 0;
    int *A[n];

    while(t!=n){
    	
    	int k;
    	cin >> k;
		int temp[k];

    	for(int i=0;i<k;i++){
    		cin >>temp[i];
    	}

    	A[t] = &temp;

    	t++;
    }


    while(q--){

    	int i,j;
    	cin >> i >> j;

    	cout << A[i]B[j];
    }

	return 0;
}

