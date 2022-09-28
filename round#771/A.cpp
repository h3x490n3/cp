#include <iostream>


using namespace std;

int		main()
{
	int	t;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int n = 0;
		cin >> n;
		int arr[n];
		int res[n];
		int a = 0;
		int b = 0;


		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}

		for (int j = 0; j < n; j++)
		{
			if (j + 1 != arr[j] && a == 0)
			{
				a = j + 1;
			}
			else if (a == arr[j]){
				b = j + 1;
			}
		}
		int tmp = b;

		if (!a){
			for (int j = 0; j < n; j++){
				std::cout << arr[j];
				if (j + 1 != n)
					std::cout << " ";
			}
		}else{
			for (int j = 0; j < n; j++)
			{
				if (j+1 >= a && j+1 <= b)
				{
					res[j] = arr[tmp-1];
					tmp--;
				}else{
					res[j] = arr[j];
				}
				std::cout << res[j];
				if (j + 1 != n)
					std::cout << " ";
			}
		}
		cout << endl;

	}
	return 0;
}