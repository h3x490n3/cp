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

void	solve(void)
{
	int n;
	cin >> n;
	int sticks[n];
	int min = 2e9;
	int a = 0;

	for(int i = 0; i < n; i++)
		cin >> sticks[i];

	sort(sticks, sticks + n);



	for(int i = 2; i < n; i++)
	{
	// sticks[i] - sticks[i-2]
		if (min > sticks[i] - sticks[i-2])
		{
			min = sticks[i] - sticks[i-2];
			a = i;
		}
	}

	cout << sticks[a] - sticks[a - 2] << endl;
}

int		main(void)
{
	int t;
	cin >> t;

	for (int tt = 0; tt < t; tt++)
	{
		solve();
	}
	return 0;
}

// 
// 1 3 10 12 15 17 89
// 1 1 3 3 3 
