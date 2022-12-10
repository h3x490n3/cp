#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <set>

using namespace std;

bool	unq_f_c(string	s)
{
	set<char>	st;
	for (size_t i = 0; i < s.size(); i++)
		st.insert(s[i]);	
	if (st.size() != 14)
		return false;
	return true;
}

int	main(void)
{
	ifstream file("input");
	string	packet;
	string	result;

	getline(file, packet);
	file.close();

	for (size_t i = 0; i < packet.size(); i++)
	{
		if (unq_f_c(packet.substr(i, 14)))
		{
			cout << packet.substr(i, 14) << endl;
			cout << i+14 << endl;
			return 0;
		}
	}
}
