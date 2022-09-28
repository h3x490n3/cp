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

#define ll unsigned long long
using namespace std;

int		main()
{
	size_t t;
	cin >> t;

	for (size_t i = 0; i < t; i++)
	{
		size_t x, y;
		cin >> x >> y;

		size_t max = (x > y) ? x : y;
		size_t diff = (x > y) ? x - y: y - x;
		ll iter = 2 + (max - 2)*2;
		ll num = (((max - 1) * (2 + iter)) / 2) + 1;


		
		if (max % 2 == 1)
		{
			if (x > y)
				num-=diff;
			else
				num+=diff;
		}else{
			if (x > y)
				num+=diff;
			else
				num-=diff;
		}
		
		cout << num << "\n";

		// O(1)
	}	

	return 0;
}
