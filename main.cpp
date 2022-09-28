#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


bool validation(string &s){
    int n = s.length();
	int lost=0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            lost++;
        else
            lost--;
		if (lost<0)
		{
			return false;
		}
 
    }
	if (lost!=0)
		return false;
	return true;
}

int		main()
{
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
	{
		string br;
		string buffer;
		cin >> buffer;
		char begin=buffer.at(0);
		char end=buffer.at(buffer.length()-1);
		for (int j=0;j<buffer.length();j++)
		{
			if (buffer.at(j) == begin)
			{	
				br+='(';
			}
			else if (buffer.at(j) == end)
			{
				br+=')';
			}
			else{
				br += buffer.at(j);
			}
		}
		int flag=0;
		string tmp = br;
		for (int j=0;j<tmp.length();j++)
		{
			if (tmp.at(j) != '(' && tmp.at(j) != ')')
				tmp.at(j)='(';
		}
		if (validation(tmp))
		{
			cout << "YES" << endl;
			flag=1;
		}
		tmp.clear();
		tmp=br;
		for (int j=0;j<tmp.length();j++)
		{
			if (tmp.at(j) != '(' && tmp.at(j) != ')')
				tmp.at(j)=')';
		}
		if (!validation(tmp) && flag==0)
		{
			cout << "NO" << endl;
		}else if (flag==0){
			cout << "YES" << endl;
		}

	}
	return 0;
}	
