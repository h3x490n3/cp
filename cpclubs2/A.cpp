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
	string line;
	cin >> n;
	cin >> line;
	string str;

	sort(line.begin(),line.end());
	for (int i=0; i<n; i++){
		if (isupper(line[i])) line[i] = tolower(line[i]);
		if (str.find(line[i]) == string::npos)
			str+=line[i];
	}
	if (str.size() == 26)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}