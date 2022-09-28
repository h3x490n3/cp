#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
	
using namespace std;

bool inRange(int val, int y, int k)
{
	if (k >= val && k <= (val+2*y-2))
		return true;
	return false;
}

void searchRange(int y, int k, int val)
{
	unsigned int	i=val;
	unsigned int	idx=1;
	unsigned int	len = 2*y-1; // always unpair
	unsigned int	xx,yy;

	for (; i <= (val+(2*y)-2); i++,idx++)
	{
		if (i == k)
			break;
	}


	//cout << "index: " << idx << endl;
	//cout << "len/2: " << len/2 << endl;
	if (idx < (len/2)+1)
	{
		yy = y;
		xx = idx;
	}
	else if (idx > (len/2)+1)
	{
		xx = y;
		yy = y - (idx - ((len/2)+1));
	}
	else{
		yy = y;
		xx = y;
	}
	cout << xx << " " << yy << endl;
}

int		main()
{
	int t;
	cin >> t;
	for (int tt=0; tt<t; tt++)
	{
		unsigned int k;
		cin >> k;

		unsigned int x=1,y=1;
		unsigned int val=1;

		while (true)
		{
			if (inRange(val, y, k)){
				searchRange(y, k, val);
				break;
			}
			val=(2*y)+val-1;
			y++;
		}
	}
}