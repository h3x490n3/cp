#include <iostream>
#include <string>
#include <vector>
using namespace std;


int		main()
{
	int n;
	cin >> n;
	vector<int> Z;
	for (int i=0; i<n; i++)
	{
		string a;
		cin >> a;
		string b;
		cin >> b;
		int l=a.find(b.at(0));
		int k=0;
		int sum=0;
		for (int j=1; j<b.length(); j++)
		{
			k=a.find(b.at(j));
			sum += abs(k-l);
			l = k;
		}
		Z.push_back(sum);
	}

	for (int i=0;i<Z.size();i++)
		cout << Z.at(i) << endl;
	return 0;
}
