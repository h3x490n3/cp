#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int		main()
{
	int		tt;
	cin >> tt;

	for(int t=0; t<tt; t++)
	{
		vector<pair<int,int> > myvec;
		int flag = 0;
		int index = -1;
		for (int j = 0; j < 3; j++)
		{
			pair<int, int>	p;
			cin >> p.first >> p.second;

			for(size_t i = 0; i < myvec.size(); i++)
			{
				if (p.second == myvec[i].second){
					flag = 1;
					index = i;
				}
			}

			myvec.push_back(p);
		}

		if (flag){
			cout << abs(myvec[index].first - myvec[index + 1].first) << endl;
		}else{
			cout << "0" << endl;
		}

	}
	return 0;
}