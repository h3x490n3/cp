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

int     main()
{
    size_t tt;
    cin >> tt;

    for (size_t t = 0; t < tt; t++)
    {
        size_t x,y;
        cin >> x >> y;

        if ((x+y) % 2 == 0)
            cout << x+y << " " << 0 << endl;
        else
            cout << "-1 -1" <<  endl;
    }
    return 0;
}