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

int		main()
{
	int t;
	cin >> t;
	for (int tt=0; tt<t; tt++)
	{
		int k;
		cin >> k;
		int i=1;
		vector<int> A;

		while (A.size() != k)
		{
			if (i%3 && to_string(i).at(to_string(i).length()-1) != '3')
				A.push_back(i);
			i++;
		}
		cout << A.back() << endl;
	}
}