#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <cctype>
#include <set>

using namespace std;

// Function that finds chars present in both s1 and s2 in linear time
// Returns priority of dupped items in an n-rucksack
int		scout_rucksack(string const &s1, string const &s2, string const &s3);
// Function accepts a string and returns the same string with unique chars
string	unique_is_key(string str);

int		main(void)
{
	ifstream file("input");
	string buffer;
	int g_priority = 0;

	while (getline(file, buffer))
	{
		// challenge 1
//		g_priority += scout_rucksack(unique_is_key(buffer.substr(0,buffer.size()/2)),
//				unique_is_key(buffer.substr(buffer.size()/2, buffer.size()/2)));
		// challenge 2
		string sack1 = unique_is_key(buffer);
		getline(file, buffer);
		string sack2 = unique_is_key(buffer);
		getline(file, buffer);
		string sack3 = unique_is_key(buffer);

		g_priority += scout_rucksack(sack1, sack2, sack3);
	}

	file.close();
	cout << g_priority << endl;
}

int		scout_rucksack(string const &s1, string const &s2, string const &s3)
{
	map<char, int> map;
	int priority = 0;

	// fill map with (character, 1)
	for (size_t i = 0; i < s1.size(); i++)
		map[s1[i]]++;

	for (size_t i = 0; i < s2.size(); i++)
		map[s2[i]]++;

	for (size_t i = 0; i < s3.size(); i++)
	{
		map[s3[i]]++;

		if (map[s3[i]] > 2)
			priority += isupper(s3[i]) ? (s3[i] - 38) : (s3[i] - 96);
	}
	return priority;
}

string	unique_is_key(string str)
{
	set<char> m_set;
	string s;

	for(size_t i = 0; i < str.size(); i++)
	{
		m_set.insert(str[i]);
	}

	set<char>::iterator it;

	for(it = m_set.begin(); it != m_set.end(); it++)
		s += *it;

	return s;
}
