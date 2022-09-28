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
#include <numeric>

#define pb push_back
#define ll long long
	
using namespace std;

void solve(void)
{
    int n,m,k;
    cin >> n >> m >> k;
    vector<string> vec1(n);
    for (int i=0; i<n; i++) cin >> vec1[i];
    int depth=0;
    int w=0;

    for (int i=vec1.size()-1; i>0; i--)
    {
        for (int j=0; j<vec1.at(i).size(); j++)
        {
            if (vec1.at(i).at(j) == '*')
            {
                if (j+1 < vec1.at(i).size() && j-1 >= 0){
                    if (vec1.at(i-1).at(j-1) != '*' || vec1.at(i-1).at(j+1) != '*'){
                        w++;
                    }
                    else{
                        depth++;
                    }

                }else
                    w++;
            }
        }
    }
    cout << depth << " " << w << "\n";
    if (depth-1 > k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int     main()
{
    int tt;
    cin >> tt;
    for (int ttt=0; ttt<tt; ttt++)
        solve();
    return 0;
}