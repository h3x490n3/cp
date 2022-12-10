#include <iostream>
#include <string>
#include <fstream>
#include <utility>

using namespace std;

// is_contained is used in the first half
bool	is_contained(pair<int, int> range1, pair<int, int> range2);
// is_overlaped is used in the second half
bool	is_overlaped(pair<int, int> range1, pair<int, int> range2);
pair<pair<int,int>, pair<int,int> >	parse(string &str);

int	main(void)
{
	ifstream file("input");
	string buff;
	size_t counter = 0;

	while (getline(file, buff))
	{
		pair<pair<int,int>, pair<int,int> > ranges = parse(buff);
		if (is_overlaped(ranges.first, ranges.second))
			counter++;
	}

	file.close();
	cout << counter << endl;
}

bool	is_contained(pair<int, int> range1, pair<int, int> range2)
{
	return ((range1.first >= range2.first) && (range1.second <= range2.second)) ||
		((range2.first >= range1.first) && (range2.second <= range1.second));
}

pair<pair<int,int>, pair<int,int> >	parse(string &str)
{
	int a,b,c,d;
	size_t pos = str.find(",");
	string frng = str.substr(0, pos);
	string srng = str.substr(pos + 1);

	pos = frng.find("-");
	
	a = stoi(frng.substr(0, pos));
	b = stoi(frng.substr(pos + 1));
	
	pos = srng.find("-");
	c = stoi(srng.substr(0, pos));
	d = stoi(srng.substr(pos + 1));
	
	return make_pair(make_pair(a, b), make_pair(c, d));
}

bool	is_overlaped(pair<int, int> range1, pair<int, int> range2)
{
	return ( (range1.first <= range2.second) && (range2.first <= range1.second) );
}
