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

bool validator(vector<int> &vec)
{
	for (size_t i=1; i<vec.size(); i++)
	{
		if (abs(vec.at(i) - vec.at(i-1)) == 1)
			return false;
	}
	return true;
}

int		main()
{
	//vector<int> vec;
	size_t n;
	cin >> n;
	if (n == 1){
		cout << n << endl;
		return 0;
	}
	if (n < 4){
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	if (n == 4){
		cout << "3 1 4 2" << endl;
		return 0;
	}

	for (size_t i=1; i <= n; i+=2)
	{
		//vec.push_back(i);
		cout << i << " ";
	}

	for (size_t i=2; i <= n; i+=2)
	{
		//vec.push_back(i);
		cout << i << " ";
	}
	cout << '\n';
	//cout << validator(vec) << endl;
	return 0;
}
