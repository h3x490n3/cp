#include <iostream>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

std::vector<std::string> split (const std::string &s, char delim) {
    std::vector<std::string> result;
    std::stringstream ss (s);
    std::string item;

    while (std::getline(ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}

string		ffind(vector<pair<string, string> > &myvec, vector<string> &status)
{
	string name = "";


	for (size_t i = 0; i < myvec.size(); i++)
	{

		for (size_t j = 0; j < status.size(); j++){
			if (myvec[i].second == status[j]){
				name = myvec[i].first;
				myvec.erase(myvec.begin() + i);
				return name;
			}

		}
	}

	return name;
}

int		main(void)
{
	int n;

	cin >> n;
	vector<pair<string, string> > myvec;
	for (int i = 0; i < n; i++) {
		string name, status;
		cin >> name >> status;
		myvec.push_back(make_pair(name, status));
	}

	vector<string> status;

	status.push_back("rat");
// rat -> woman & child -> man -> captain

	while (1)
	{
		string ret = ffind(myvec, status);
		if (!ret.size())
			break;
		cout << ret << endl;
	}

	status.clear();
	status.push_back("woman");
	status.push_back("child");

	while (1)
	{
		string ret = ffind(myvec, status);
		if (!ret.size())
			break;
		cout << ret << endl;
	}

	status.clear();
	status.push_back("man");

	while (1)
	{
		string ret = ffind(myvec, status);
		if (!ret.size())
			break;
		else
			cout << ret << endl;
	}

	status.clear();
	status.push_back("captain");

	while (1)
	{
		string ret = ffind(myvec, status);
		if (!ret.size())
			break;
		cout << ret << endl;
	}

	return 0;
}