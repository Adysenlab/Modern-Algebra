//the graph class defined in the header file is being populated
#include "Graph.hpp"

//constructor 
GGraph::Graph::Graph(int V){
	this->V=V;
	adj=new std::list<int>[V];
}


void GGraph::Graph::addEdge(int v, int w){
	adj[v].push_back(w);
}


void GGraph::Graph::BFS(int s){
	bool *visited= new bool[V];
	for (int i = 0; i <V ; ++i)
	{
		visited[i]=false;
	}
	std::list<int> queue;
	visited[s]=true;
	queue.push_back(s);
	std::list<int>::iterator i;
	while(!queue.empty()){
		s=queue.front();
		std::cout << s << " ";
		queue.pop_front();
		for ( i = adj[s].begin() ;
			 i !=adj[s].end(); ++i)
		{
			if (!visited[*i])
			{
				visited[ *i]= true;
				queue.push_back(*i);

			}
		}
	}
}


void GGraph::Graph::DFSUtil(int v, bool visited[]){
	visited[v]= true;
	std::cout << v << " ";
	//list iterator 
	std::list<int>::iterator i;
	for ( i = adj[v].begin(); i !=adj[v].end() ; ++i)
	{
		if (!visited[*i])
		{
			DFSUtil(*i, visited);
		}
	}
}


void GGraph::Graph::DFS(int v){
	bool *visited=new bool[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i]=false;
	}
	//call the recursive DFS helper function
	DFSUtil(v, visited);
}
