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
	vector<size_t> vec(n);
	for (size_t i = 0; i < n; i++) cin >> vec[i];
	
	size_t res=0;
	size_t m;
	for (size_t i = 0; i < k; i++)
		res+=vec[i];
	size_t idx=0;
	m = res;
	for (size_t i = k; i < vec.size(); i++)
	{
		res = res + vec[i] - vec[i - k];
		if (m > res){
			idx = i;
			m = res;
		}
	}
	if (idx-k+2>0)
		cout << (idx-k+2) << endl;
	else
		cout << 1 << endl;
	return 0;
}
