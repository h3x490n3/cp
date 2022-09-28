#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int maxSubArraySum(vector<int> &a)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
  
    for (size_t i = 0; i < a.size(); i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
  
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

pair<int, int>	getmaxrange(vector<int> &a, int k)
{
	int max = INT_MIN;
	int aa=0;
	int bb=0;
	for(size_t i = 0; i < a.size()-k; i++)
	{
		int tmp = 0;
		for(int j = i; j < k; j++)
		{
			tmp += a[j];
		}
		if (tmp > max){
			max = tmp;
			aa = i;
			bb = i + k;
		}
	}
	return make_pair(aa, bb);
}

int		main()
{
	int tt;
	cin >> tt;

	for (int t = 0; t < tt; t++)
	{
		int n,x;
		cin >> n >> x;
		vector<int> a(n);
		for(int i = 0; i < n; i++)
			cin >> a[i];
		vector<int> b = a;
		for (int i = 0; i <= n; i++)
		{
			a = b;
			vector<int> tmp_vec = a;

			pair<int, int> max_range = getmaxrange(a, i);
			int max_sum = maxSubArraySum(a);

			if (max_range > max_sum)
				

			for (int j = 0; j < i; j++)
			{
				int max = *max_element(tmp_vec.begin(), tmp_vec.end());
				// std::cout << "max elem : " << max << " |";
				tmp_vec.erase(find(tmp_vec.begin(), tmp_vec.end(), max));
				int idx = find(a.begin(), a.end(), max) - a.begin();
				a[idx] += x;
			}
			
			// int max = *max_element(a.begin(), a.end());
			// cout << "max = " << max << " | " << "sum = " << sum << endl;
			if (max_sum < 0)
				cout << "0 ";
			else
				cout << max_sum << " ";
			// if (max < 0)
			// {
			// 	cout << "0 ";
			// }
			// else if (max > max_sum)
			// {
			// 	cout << max << " ";
			// }
			// else if (max_sum < 0)
			// {
			// 	cout << "0 ";
			// }
			// else
			// {
			// 	cout << max_sum << " ";
			// }
		}
		cout << endl;

	}
	return 0;
}