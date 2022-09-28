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

size_t	foo(size_t n)
{
	int s=0;
	for (size_t i = 1; i<=n; i++)
		s+=i;
	return s;
}

int		main()
{
	size_t	n;
	cin >> n;
	int sum=0;
	for (size_t i = 0; i < n-1; i++){
		int b;
		cin >> b;
		sum += b;
	}
	cout << (foo(n) - sum) << endl;
	return 0;
}