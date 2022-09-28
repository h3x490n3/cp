#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int		main(void)
{
	int tt;
	cin >> tt;
	for (int t = 0 ; t < tt; t++)
	{
		string	s;
		cin >> s;

		int r,g,b;
		r=0;
		g=0;
		b=0;

		int flag = 0;
		for (size_t i = 0; i < s.size(); i++)
		{
			if (s[i] == 'r')
				r = 1;
			else if (s[i] == 'g')
				g = 1;
			else if (s[i] == 'b')
				b = 1;
			else if (s[i] == 'R' && !r){
				flag = 1;
				break;
			}
			else if (s[i] == 'G' && !g){
				flag = 1;
				break;
			}
			else if (s[i] == 'B' && !b){
				flag = 1;
				break;
			}
		}

		if (!flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	return 0;
}