#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,max = 0;
    cin >> n;
    vector<int> types(n);
	int freq[6] = {0};
    
    for(int i =0; i<types.size(); i++){
    	cin >> types[i];
    	freq[types[i]]++;
	}
    int  index;
    for(int i = 0; i < 6;  i++)
    	if(max<freq[i]){
    		max = freq[i];
    		index = i;
    	}
    	
    	cout << index << endl;
    return 0;
}

