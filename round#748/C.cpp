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
	int N;
	cin >> N;

	for (int tt=0; tt<N; tt++)
	{
		int n,k;
		cin >> n >> k;
		vector<int> m;
		int b,alive=k;
		for (int i=0; i<k; i++){
			cin >> b;
			m.push_back(b);
		}
		for (int i=0; i<n; i++){
			alive-=count(m.begin(), m.end(), i);
			//for (int j=0;j<m.size();j++)
			//	cout << m.at(j) << " ";
			//cout << endl;
			//cout << count(m.begin(), m.end(), i) << endl;
			vector<int>::iterator itm = min_element(m.begin(), m.end());
			*itm+=1;
			//cout << "@#$%" << *itm << endl;
		}
		cout << alive << endl;
	}
}