#include <bits/stdc++.h>

using namespace std;

bool compare(string a, string b){
    //cout << "compare(" << a << "," << b << ")" << endl;
    bool test = false;
    if(a.length()==b.length())test = true;
    return ((a.compare(b) < 0) && test);
}

bool length(string a, string b){
	if(a.length()>=b.length())
	 return false;
	else 
	 return true;
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    
    
    std::sort(unsorted.begin(), unsorted.end(),length);
    std::sort(unsorted.begin(), unsorted.end(),compare);

    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cout <<  unsorted[unsorted_i] << endl;
    }
    return 0;
}

