#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int	main(void)
{
	for (size_t j=0; j<5; j++){
		for (size_t i=0; i<5; i++){
			size_t	b;
			cin >> b;

			
			if (b == 1){
				size_t res = 0;
				res = ((j>2) ? j-2: 2-j) + ((i>2) ? i-2: 2-i);
				cout <<  res << endl;
			}
		}
	}
	return 0;
}
