#include <vector>
#include <iostream>

using namespace std;

int		main()
{
	vector<int> A;

	for (int i=0;i<5;i++)
	{
		A.push_back(i*43);
	}

	for (int i=0;i<A.size();i++)
	{
		cout << A.at(i) << endl;
	}

	cout << "---------------------------"<<endl;
	vector<int>::iterator it = A.begin()+2;
	A.erase(it);
	for (int i=0;i<A.size();i++)
		cout << A.at(i) << endl;

	return 0;
}
