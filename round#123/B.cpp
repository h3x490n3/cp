#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool	validator(vector<int> &myvec)
{
	for(size_t i = 0; i < myvec.size() - 2; i++)
	{
		if (myvec[i] + myvec[i+1] == myvec[i+2])
			return false;
	}	
	return true;
}

void	debug(vector<int> &myvec)
{
		for(size_t i = 0; i < myvec.size(); i++){
			cout << myvec[i];
			if (i != myvec.size() - 1)
				cout << " ";
		}
		cout<< endl;
}

int		main()
{
	int tt;
	cin >> tt;

	for (int t = 0; t < tt; t++)
	{
		int n;
		cin >> n;

		vector<int> myvec;
		for(int i = n; i > 0; i--)
			myvec.push_back(i);

		debug(myvec);
		swap(myvec[1], myvec[2]);
		debug(myvec);
		swap(myvec[1], myvec[2]);
		for (int i = 0; i < n-2; i++)
		{
			swap(myvec[0], myvec[i+1]);
			debug(myvec);
		}

	}

	return 0;
}