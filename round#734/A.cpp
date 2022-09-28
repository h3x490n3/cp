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
		double n;
		cin >> n;
		int c1,c2;
		c1 = int(ceil(n/3));
		c2 = int(floor(n/3));

		if (c1+2*c2 == n)
			cout << c1 << " " << c2 << endl;
		else 
			cout << c2 << " " << c1 << endl;
	}
	return 0;
}