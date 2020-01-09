#include <iostream>
using namespace std;

void get_matrix(int numberOfNodes,int W[20][20])
{

	cout << "Enter the weighted adjacency matrix: " << endl;

	for (int i=0; i<numberOfNodes; i++)
		for(int j=0; j<numberOfNodes; j++)
			cin >> W[i][j];
}



void prim(int numberOfNodes,int W[20][20])
{
	int source;
	int min, min_cost=0;
	int visited[20];  
	int a,b,u,v;
	int numberOfEdges = 1;


	for(int i=0; i<numberOfNodes; i++)
		visited[i] = 0;

	cout << "Enter the index of source node: " << endl;
	cin >> source;
	visited[source] = 1;

	
	while(numberOfEdges < numberOfNodes) 
	{
		min = 999;

		for(int i=0; i<numberOfNodes; i++)
		{
			for(int j=0; j<numberOfNodes; j++)
			{
				if(W[i][j] < min)	 
				{
					if(visited[i] == 0) 
						continue;
					else 
					{
						min = W[i][j]; 
						a = u = i;
						b = v = j;
					}
				}
			}
		} 

		if(visited[u]==0 || visited[v]==0)	
		{
			cout << "Number of edges in created tree vertices= " << numberOfEdges++<<endl;
			cout << a << "->" << b << " = " << min <<endl;
			min_cost = min_cost + min;
			visited[b] = 1;  
		}

		W[a][b] = W[b][a] = 999; 
			
	} 

	cout << "Minimum Cost = " << min_cost << endl;
		
} 
int main()
{
	int W[20][20];
	int numberOfNodes;
	cout << "Enter the number of nodes: ";
	cin >> numberOfNodes;

	get_matrix(numberOfNodes, W);
	prim(numberOfNodes, W);

	return 0;

}
