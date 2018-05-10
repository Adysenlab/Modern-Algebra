/*
this is just a graph ds later improvements are to be incorporated

*/



#include "shared/Graph.cc"
int main(int argc, char *argv[])
{
    

    // go create  the graph
    GGraph::Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    std::cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) :: ";
    g.BFS(2);

    //for dfs
    std::cout << "Following is Depth First Traversal (starting from vertex 2) :: ";
    g.DFS(2);
    return 0;
}