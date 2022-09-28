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
	size_t n;
	size_t s=0;
	cin >> n;
	vector<int> vec(n);
	for (size_t i=0; i<n; i++) cin >> vec[i];

	for (size_t i=1; i < n; i++)
	{
		if (vec[i] < vec[i-1]){
			s+=(vec[i-1] - vec[i]);
 		}
	}

	cout << s << endl;

	return 0;
}