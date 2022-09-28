#include <iostream>
#include <cmath>
#include <string>

int	main(void)
{
	std::string b;
	std::cin >> b;
	std::vector<size_t> vec;

	for (size_t i=0; i<b.size(); i++){
		if (isdigit(b[i])
				vec.push_back(stoi(b[i]));
	}
	sort(vec.begin(), vec.end());
	cout << vec[0];
	return 0;
}
