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

void    solve(void)
{
    int n;
    cin >> n;
    vector<int> vec1(n);
    vector<pair<int,int> > vec2;
    for (int i=0; i<n; i++) cin >> vec1[i];

    for (int i=0;i<n-1;i++){
        while (vec1.at(i) && vec1.at(i+1)){
            pair<int,int> P(i+1, i+2);
            vec2.push_back(P);
            vec1.at(i) -= 1;
            vec1.at(i+1) -= 1;
        }
    }
    cout << vec2.size() << "\n";
    for (int i=0; i<vec2.size(); i++) cout << vec2.at(i).first << " " << vec2.at(i).second << "\n";
}

int     main()
{
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++)
        solve();
}