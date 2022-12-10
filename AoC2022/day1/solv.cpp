#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

bool	ac_order(int i, int j) { return (i < j); }
int		max_tres_element(vector<int> & inventory);

int		main(void)
{
	fstream file;
	string buff;
	vector<int>	inventory;
	int sum = 0;

	file.open("input", ios::in);

	while (file.peek() != EOF)
	{
		getline(file, buff);
		if (!buff.size())
		{
			inventory.push_back(sum);
			sum = 0;
		}
		else
			sum += stoi(buff);
	}
	file.close();

// first challenge of the day
	cout << *max_element(inventory.begin(), inventory.end()) << endl;
// second challenge of the day	
	cout << max_tres_element(inventory) << endl;
}

int		max_tres_element(vector<int> & inventory)
{
	sort(inventory.begin(), inventory.end(), ac_order);

	return (inventory[inventory.size() - 1] + 
		inventory[inventory.size() - 2] +
		inventory[inventory.size() - 3]);
}
