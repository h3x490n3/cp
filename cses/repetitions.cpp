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

size_t foo(string const &str)
{
	size_t max=0;
	char c = str[0];
	size_t idx = 0;

	size_t i=0;
	for (; i<str.size(); i++)
	{
		if (str.at(i) != c){
			if (i - idx > max){
				max = i - idx;
			}
			c = str.at(i);
			idx = i;
		}
	}
	if (i - idx > max) max = i - idx;
	return max;
}

int		main()
{
	string str;
	cin >> str;

	cout << foo(str) << endl;
	return 0;
}

// O(n)