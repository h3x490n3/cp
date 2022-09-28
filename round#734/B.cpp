#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
	
using namespace std;

string  rmdup(string const &str)
{
	string ret;

	for (int i=0; i<str.size(); i++)
	{
		if (ret.find(str.at(i)) == string::npos)
			ret+=str.at(i);
	}
	return ret;
}

int		main()
{
	int t;
	cin >> t;

	for (int tt=0; tt<t; tt++)
	{
		string s;
		cin >> s;
		int len=s.size();
		int c1=0,c2=0;
		string unique = rmdup(s);

		for (int i=0; i<unique.size(); i++)
		{
			int cou = count(s.begin(), s.end(), unique.at(i));
			if (cou == 1)
				c1++;
			else
				c2++;
		}
		cout << c2 + c1/2 << endl;
	}
}
