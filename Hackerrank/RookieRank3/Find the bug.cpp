#include <bits/stdc++.h>

using namespace std;

vector < int > findTheBug(vector < string > grid){
    vector<int> res;int found  = 0;
    for(int i = 0; i<grid.size() && !found; i++)
        for(int j = 0; j<grid[i].size(); j++)
            if(grid[i][j]=='X'){
                res.push_back(i);
                res.push_back(j);
                found = 1;
            }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    // Return an array containing [r, c]
    vector < int > result = findTheBug(grid);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "," : "");
    }
    cout << endl;
    

    return 0;
}

