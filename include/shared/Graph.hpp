#pragma once
#include <iostream>
#include <list>

#include "Tablet.hpp"
namespace GGraph{
    class Graph: public GGraph::Helper::Tablet{
        int V;
        std::list<int> *adj;
        //FOR depth first search
        void DFSUtil(int v,bool visited[]);
    public:
        Graph(int V);
        void addEdge(int v, int w);
        void BFS(int s);
        void DFS(int v);
    };

}