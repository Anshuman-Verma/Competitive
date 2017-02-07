#include <bits/stdc++.h>

using namespace std;

int main()
{
    string binary = bitset<32>(196613).to_string(); //to binary
    cout<<binary<<"\n";
	string a = binary.substr(0,16);
	 unsigned long decimal = bitset<32>(a).to_ulong();
	cout << decimal << endl;
    unsigned long decimal1 = bitset<32>(binary).to_ulong();
    cout<<decimal1<<"\n";
    return 0;
}
