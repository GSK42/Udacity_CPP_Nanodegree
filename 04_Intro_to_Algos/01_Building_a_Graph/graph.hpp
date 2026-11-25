#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include<vector>
#include<string>

class Graph
{
    public:
    std::vector<std::string> node;
    std::vector<std::vector<int>> adjList;

    void addNode (const std::string &name);
    void addEdge(int u, int v);
    void printgraph() const;
    
};



#endif
