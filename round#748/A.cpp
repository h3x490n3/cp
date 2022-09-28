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
     
    int		main()
    {
    	int N;
    	cin >> N;
     
    	for (int tt=0; tt<N; tt++)
    	{
			vector<long> a;
    		long b;
			for (int i=0; i<3; i++){
				cin >> b;
				a.push_back(b);
			}

			long m = *max_element(a.begin(), a.end());
     //(count(a.begin(), a.end(), a)>1)
	 		int occur =  count (a.begin(), a.end(), m);
    		if (!m)
    			cout << "1 1 1" << endl;
    		else{
				for (int i=0; i<3; i++){
					if (a.at(i) == m && occur==1)
						cout << "0 ";
					else if (a.at(i) == m)
						cout << 1 << " ";
					else if (a.at(i) != m)
						cout << m-a.at(i)+1 << " ";
				}
				cout << endl;
    		}
    	}
     
     
    	return 0;
    }