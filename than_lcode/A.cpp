#include <iostream>
#include <vector>
#include <map>

using namespace std;

// h(x) = x mod p

int		main(void)
{
	int p, n;

	cin >> p >> n;
	map<int, int> mymap;

	for (int i = 0; i < n; i++)
	{
		int nb;
		cin >> nb;

		int h_nb = nb % p;

		 if (mymap.find(h_nb) == mymap.end())
		 	mymap.insert(make_pair(h_nb, nb));
		  else{
			  cout << i+1 << endl;
			   return 0;
		  }

	}

	cout << "-1" << endl;

	return 0;
}