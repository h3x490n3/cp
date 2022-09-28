#include <iostream>
#include <vector>
#include <map>

using namespace std;

int		E(int n)
{
	int result = -1;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			if (i > result)
				result = i;
		}
	}
	return result;
}

int		M(int n)
{
	int result = -1;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			if (i > result)
				result = i;
		}
	}
	return result;
}

int		main(void)
{
	int n;
	cin >> n;

	int tour = 2;
	while (1)
	{
		if (tour % 2 == 0){
			int tmp = M(n);
			if (tmp == -1){
				cout << "Ehab" << endl;
				break;
			}
			n -= tmp;
		}
		else{
			int tmp = E(n);
			if (tmp == -1){
				cout << "Mahmoud" << endl;
				break;
			}
			n -= tmp;
		}
		tour++;
	}
	return 0;
}