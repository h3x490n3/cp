#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int	sum(int a, int b, vector<int> &myvec)
{
	int su = 0;
	for (int i = a; i <= b; i++)
		su += myvec[i];
	return su;
}

int		main(void)
{
	int n;
	cin >> n;
	vector<int> myvec(n);

	for (int i = 0; i < n; i++)
		cin >> myvec[i];

	int time = 1;
	int s = 0;
	int f = n - 1;

	int a = 0;
	int b = 0;


	while (a+b < n)
	{
		if (sum(0, s, myvec) == time){
			s += 1;
			a++;
		}

		// if (abs(s - f) == 1)
		// 	break;

			if (a+b == n)
				break;


		if (sum(f, n-1, myvec) == time ){
			f -= 1;
			b++;
		}
		// cout << a << " " << b << endl;
		time++;
	}

	cout << a << " " << b << endl;

	return 0;
}