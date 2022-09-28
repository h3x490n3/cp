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

# define ll long long

int		main()
{
	int N;
	cin >> N;

	for (int tt=0; tt<N; tt++)
	{
		string b;
		cin >> b;
		ll ans = LONG_MAX;
		for (int i=0; i < b.length(); i++){
			for (int j=i+1; j < b.length(); j++){
				if (b[i]=='0' && b[j] == '0') ans = b.length()-2-i;
				if (b[i]=='2' && b[j] == '5') ans = b.length()-2-i;
				if (b[i]=='5' && b[j] == '0') ans = b.length()-2-i;
				if (b[i]=='7' && b[j] == '5') ans = b.length()-2-i;

			}
		}
		cout << ans << endl;
	}
	return 0;
}