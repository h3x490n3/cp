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
	
using namespace std;

#define pb push_back
#define ll long long

void debugvec(vector<int> const &vec)
{
    cout << "[";
    for (int i=0; i<vec.size()-1; i++)
    {
        cout << vec.at(i) << ",";
    }
    cout << vec.at(vec.size()-1) << "]" << endl;
}

bool sorted(vector<int> const &vec)
{
    for (int i=0; i<vec.size()-1; i++)
    {
        if (vec.at(i) > vec.at(i+1))
            return false;
    }
    return true;
}

void    solve(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];
    vector< vector<int> > ok;

    for (int i=0;i < n; i++){
        int itr = max_element(a.begin(), a.end()) - a.begin();
        if (itr != n - i - 1){
            int arr [] = {itr+1, n-i, 1};
            vector<int> z(arr,arr+3);
            ok.push_back(z);
        }
        a.erase(a.begin() + itr);
    }
    cout << ok.size() << " \n";
    for (int i=0; i<ok.size(); i++) cout << ok.at(i)[0] << " " << ok.at(i)[1] << " " << ok.at(i)[2] << "\n";
} 

int     main()
{
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++)
        solve();
}

