#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
using namespace std;
 
int main()
{
	vector<int> v; bool found; int lower, upper;
	int a, b;int low;vector<int>::iterator index;int flag = 0; bool t;
	cin >> a;
	for (int  i = 0; i <a; i++)
	{
		scanf("%d", &b);
		v.push_back(b);
 
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < a; i++)
	{
		lower = i;
		upper = i;
		found = false;
	while (lower>=0 && upper <a && found==false)
		{
		
			if (v[lower] == v[upper] && v[upper]==v[i] && upper<a )
			{
				if(upper!=a-1)
				upper++;
				if ( lower >0)
					lower--;
			}
			if (v[i]+v[upper] == v[i]*2 && i!= a-1)///put these into one function....
			{
				flag++; 
				found = true;
			}
			if (found == true)
				break;
			if (v[i] + v[lower] == v[i] * 2 && lower>0)
			{
				flag++;
				found = true;
			}
			if (found == true)
				break;
			if (v[lower] + v[upper] == v[i] * 2 && lower!=upper)
			{
				flag++; 
				found = true;
			}
			if (found == true)
				break;
			if ((v[i] * 2) - v[upper] > v[lower] && upper<a && lower>=0)///put these into one function
				upper++; 
			if (upper == a)
				break;
 
			if ((v[i] * 2) - v[upper] < v[lower] )
				lower--;
			
			if (lower <0)
				break;
		
 
		}
		
	}
	cout << flag;
    return 0;
}
 
