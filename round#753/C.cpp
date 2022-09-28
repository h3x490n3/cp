#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int	main()
{
	int n;
	cin >> n;
vector<int> res;
	for (int i=0; i<n; i++)
	{
		int len;
		cin >> len;
		vector<int> arr;
		
		for (int q=0; q<len; q++)
		{
			int a;
			cin >> a;
			arr.push_back(a);
		}
		vector<int>::iterator m;
		int mm; 
			for (int j=0; j<len; j++)
		{	m = min_element(arr.begin(), arr.end());
			mm = *m;

			if (arr.size() == 1)
					break;
						arr.erase(m);
			for (int x=0; x<arr.size(); x++)
			{
				arr.at(x) -= mm;
			}
			if (*min_element(arr.begin(), arr.end()) > mm)
				mm = *min_element(arr.begin(), arr.end());
		}
		res.push_back(mm);
	}
	for (int i=0; i<res.size(); i++)
		cout << res.at(i) << endl;

}
