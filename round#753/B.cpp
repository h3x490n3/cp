#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<long long> A;
	for (int i=0; i<N; i++)
	{
		long long a,b;
		cin >> a;
		cin >> b;
		long long j=1;
		long long pos = a;
		/*if (b>20)
		{
			j = b-20;
			 
		}*/	
		for (; j<=b; j++)
		{
			if (pos%2==0)
				pos-=j;
			else
				pos+=j;
			cout << pos << endl;
		}
		A.push_back(pos);
	}
	for (long long i=0;i<A.size();i++)
		cout << A.at(i) << endl;

}
