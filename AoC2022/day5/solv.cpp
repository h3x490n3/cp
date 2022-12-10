#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

typedef struct	procedure{
	size_t	nb;
	size_t	from;
	size_t	to;

	procedure(size_t _nb, size_t _from, size_t _to)
	:nb(_nb), from(_from), to(_to)
	{}
}t_procedure;

void			dbg_stack(stack<char> stk);
vector<stack<char> >	dt_init(void);
t_procedure		p_parse(string &line);
void			giant_cargo_crane(vector<stack<char> >	&stks,
		vector<t_procedure> procs);
void			p_fin(vector<stack<char> > &stks);

int	main(void)
{
	vector<stack<char> >		stks;
	vector<t_procedure>		procs;
	ifstream			in("input");
	size_t				i;
	string				bf;

	stks = dt_init();
	for(i = 0; i < 10; i++)
		getline(in, bf);

	while (getline(in, bf))
		procs.push_back(p_parse(bf));

	giant_cargo_crane(stks, procs);
	p_fin(stks);
}

vector<stack<char> >	dt_init(void)
{
	vector<stack<char> >	stacks(9);
	string str1 = "NSDCVQT";
	string str2 = "MFV";
	string str3 = "FQWDPNHM";
	string str4 = "DQRTF";
	string str5 = "RFMNQHVB";
	string str6 = "CFGNPWQ";
	string str7 = "WFRLCT";
	string str8 = "TZNS";
	string str9 = "MSDJRQHN";

	string s_tab[9] = {str1, str2, str3, str4, str5, str6, str7, str8, str9};

	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < s_tab[i].size(); j++)
		{
			stacks[i].push(s_tab[i][j]);	
		}
	}
	return stacks;
}

void			dbg_stack(stack<char> stk)
{
	
	while (!stk.empty())
	{
		cout << stk.top() << endl;
		stk.pop();
	}
	cout << string(60, '*') << endl;
}

t_procedure		p_parse(string &line)
{
	stringstream	ss(line);
	string		bf;
	size_t		i = 0;
	size_t		j = 0;
	int		i_tab[3];

	while (getline(ss, bf, ' '))
	{
		if (i % 2)
			i_tab[j++] = stoi(bf);
		i++;
	}

	return t_procedure(i_tab[0], i_tab[1], i_tab[2]);
}

void			giant_cargo_crane(vector<stack<char> >	&stks,
		vector<t_procedure> procs)
{
	// loop over all procedures
	for(size_t i = 0; i < procs.size(); i++)
	{
		int nb, from, to;
		stack<char>	s_bf;
		nb = procs[i].nb;
		from = procs[i].from - 1;
		to = procs[i].to - 1;

		// chall 1 push stks[from].top to stks[to] then pop from stks[from] *nb
		// chall 2 push and pop *nb from stks[from] into a vector buffer then we push in stks[to]
		for (size_t j = 0; j < nb; j++)
		{
			s_bf.push(stks[from].top());
			stks[from].pop();	
		}
		for (size_t j = 0; j < nb; j++)
		{
			stks[to].push(s_bf.top());
			s_bf.pop();
		}
	}
}

void			p_fin(vector<stack<char> > &stks)
{
	for(size_t i = 0; i < 9; i++)
		cout << stks[i].top();
	cout << endl;
}

