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
	size_t	n;
	cin >> n;

	while (n != 1){
		cout << n << " ";
		if (n % 2 == 0)
			n/=2;
		else
			n = n*3 + 1;
	}
	cout << 1 << endl;
	return 0;
}