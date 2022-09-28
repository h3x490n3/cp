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
	size_t n,k;
	cin >> n >> k;

	vector<size_t>	vec(n);
	for (size_t i = 0; i<n; i++) cin >> vec[i];

	size_t kth_val = vec[k-1];

	size_t counter = 0;
	for (size_t i = 0; i<n; i++){
		if (vec[i] >= kth_val && vec[i] > 0) 
			counter++;
	}
	cout << counter << endl;

	return 0;
}
