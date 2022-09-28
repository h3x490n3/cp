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

bool validator(int max, int nb)
{
	if (nb < 1 || nb > max)
		return false;
	return true;
}

int	 getMax(int begin, int end)
{
	return (abs(begin-end)*2);
}

int		main()
{
	int t;
	cin >> t;
	for (int tt=0; tt<t; tt++)
	{
		int a,b,c,d;
		cin >> a >> b >> c;

		int max = getMax(a,b);
		if (!validator(max, a) || !validator(max, b) || !validator(max, c))
			cout << "-1" << endl;
		else{
			int ans1 = c - (max/2);
			int ans2 = c + (max/2);

			validator(max, ans1) ? d = ans1 : d = ans2;
			cout << d << endl;
		}
	}
}