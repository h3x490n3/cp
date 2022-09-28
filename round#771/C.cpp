#include <iostream>
#include <vector>
#include <list>


using namespace std;

void	addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void	debug(vector<int> adj[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << i << " --> ";
		for (size_t j = 0; j < adj[i].size(); j++){
			cout << adj[i][j] << " ";
		}
		cout << endl;
	}
}
void	utils(vector<int> adj[], int n, int v,  bool* visited)
{

	visited[v] = true;
	cout << v << " ";

	// std::cout << "???utils " << v << std::endl;
	for (size_t i = 0; i < adj[v].size(); i++)
	{
		if (visited[adj[v][i]] == false){
			// std::cout << "hamiiiid" << i << std::endl;
			utils(adj, n, i, visited);
		}
	}
	return ;
}

int	connectedComp(vector<int> adj[], int n)
{
	// std::cout << "connected comb" << std::endl;
	bool *visited = new bool[n];
	for (int v=0; v<n; v++)
		visited[v] = false;
	int ret = 0;
	// std::cout << "@@" << n << std::endl;
	for (int v = 0; v < n; v++)
	{
		// std::cout << "##" << visited[v] << std::endl; 
		if (visited[v] == false){
			utils(adj, n, v, visited);
			cout << "\n";
			

			ret++;
		}
	}
	delete [] visited;
	return ret;
}


int		main(void)
{
	int	t;
	cin >> t;

	for (int tt = 0; tt < t; tt++)
	{
		int n;
		cin >> n;
		vector<int> adjlist[n];
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for(int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[i]){
					addEdge(adjlist, arr[i]-1, arr[j]-1);
				}
			}
		}

		// connectedComp(adjlist, n);
		// debug(adjlist, n);
		std::cout << connectedComp(adjlist, n) << std::endl;

	}

	return 0;
}