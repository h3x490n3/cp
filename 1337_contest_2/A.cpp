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
	if (n == 2){
		cout << "NO" << endl;
	}
	else if (n % 2 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
