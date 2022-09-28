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
	int n;
	cin >> n;
	vector<int> vec1(n);
	for (int i=0; i<n; i++) cin >> vec1[i];

	if (vec1.size() == 2){
		cout << "0" << endl;
		return 0;
	}

	vector<int>::iterator mi = min(vec1.begin(), vec1.end());
	vector<int>::iterator ma = max(vec1.begin(), vec1.end());

	vector<int>::iterator low1,up;
	up = upper_bound(vec1.begin(), vec1.end(), *mi);
	low1 = lower_bound(vec1.begin(), vec1.end(), *ma);

	int res = (n - ((up - vec1.begin()) + (vec1.end() - low1 )));
	if (res < 0){
		cout << "0" << endl;
		return 0;
	}
	cout << res << endl;

	return 0;
}