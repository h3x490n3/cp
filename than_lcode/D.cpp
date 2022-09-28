#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// map<x, nb of x>
bool	prac(map<int, int> &contests, int k)
{

	map<int, int>::iterator low = contests.lower_bound(k);

	// cerr << (low == contests.end()) << endl;

	if (low == contests.end())
		return false;
	// for (; it != contests.end(); it++)
	// {
	// 	if (k <= it->first)
	// 	{
	// 		if (it->second == 1)
	// 			contests.erase(it);
	// 		else
	// 			it->second -= 1;
	// 		return true;
	// 	}
	// }

	if (low->second == 1)
		contests.erase(low);
	else
		low->second -= 1;

	return true;
}

int		main(void)
{
	int n;
	cin >> n;
	vector<int> contests(n);
	map<int, int> mymap;

	for (int i = 0; i < n; i++) {
		cin >> contests[i];

		if (mymap.find(contests[i]) == mymap.end())
			mymap.insert(make_pair(contests[i], 1));
		else 
			mymap[contests[i]] += 1;
	}
	// sort(contests.begin(), contests.end());

	int k = 0;

	while (true)
	{
		bool cond = prac(mymap, k + 1);
		if (!cond)
			break;
		k++;
	}
	cout << k << endl;
	return 0;
}