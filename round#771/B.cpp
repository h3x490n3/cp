#include <iostream>

using namespace std;

void	swp(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

bool	sorted(int *a, int n)
{
	for(int i = 0; i < n-1; i++)
	{
		if (a[i+1] < a[i])
			return false;
	}
	return true;
}

int		main()
{
	int t;
	cin >> t;

	for (int tt=0; tt < t; tt++)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		
		bool alive = true;
		while (!sorted(arr, n) && alive)
		{
			for (int i =0; i < n-1; i++)
			{
				if (arr[i+1] < arr[i]){
					if ((arr[i+1] + arr[i]) % 2 == 1)
						swp(&arr[i], &arr[i+1]);
					else
						alive = false;
				}
			}
		}

		if (sorted(arr, n))
			cout << "Yes";
		else
			cout << "No";
		cout << endl;
	}
	return 0;
}