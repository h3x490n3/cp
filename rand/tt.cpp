#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

typedef long long ll;

using namespace std;

ll factorial(ll n)
{
    if (n == 0)
        return 1;
    return (n * factorial(n - 1));
}

int		main()
{
	int c;
	cin >> c;

	for (int i=0;i<c;i++)
	{
		ll n;
		cin >> n;
		ll ans =1;

		for (int j=3;j<= 2 * n; j++)
			ans = (ans * j)%((ll)(pow(10,9)+7));
		cout << (ans) << endl;
		//cout << (factorial(2*n)/2)%(ll)(pow(10,9)+7) << endl;
	}
}
bool validation(string &s){
    int n = s.length();
	int depth=0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            depth++;
        else
            depth--;
		if (depth<0)
		{
			return false;
		}
 
    }
	if (depth!=0)
		return false;
	return true;
}


