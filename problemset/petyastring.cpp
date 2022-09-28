#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int	main(void)
{
	std::string a,b;
	std::cin >> a >> b;
	
	for (size_t i=0; i<a.size(); i++)
	{
		if (std::abs(a[i]-b[i])!=(97-65) && a[i] < b[i])
		{
			std::cout << -1 << std::endl;
			return 0;
		}else if (std::abs(a[i]-b[i])!=(97-65) && a[i] > b[i]){
			std::cout << 1 << std::endl;
			return 0;
		}
	}
	    
	std::cout << 0 << std::endl;


	return 0;
}
