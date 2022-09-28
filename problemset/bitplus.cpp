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

int	main()
{
	size_t	n;
	cin >> n;
	vector<string> vec(n);
	int	 x=0;
	for (size_t i=0; i<n; i++) cin >> vec[i];
	x = count(vec.begin(), vec.end(), "++X") + count(vec.begin(), vec.end(), "X++") - count(vec.begin(), vec.end(), "X--") - count(vec.begin(), vec.end(), "--X");
	cout << x << endl;
	return 0;
}
