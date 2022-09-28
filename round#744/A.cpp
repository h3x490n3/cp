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
    int t;
    cin >> t;

    for (int tt=0; tt<t ; tt++)
    {
        string s;
        int AB,BC;
        int A=0,B=0,C=0;
        cin >> s;

        for (int i=0; i<s.size(); i++)
        {
            if (s.at(i) == 'A')
                A++;
            else if (s.at(i) == 'B')
                B++;
            else if (s.at(i) == 'C')
                C++;
        }
        if (B == A + C)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;

    }
}