#include<iostream>
#include"graph.hpp"
#include<stdio.h>

void Graph::addNode (const std::string &name)
{
    //Add the named node to the vector holding nodes
    node.push_back(name);
    //Associate an empty vector of neighbors
    adjList.push_back(std::vector<int>());

}
void Graph::addEdge(int u, int v)
{
    if (u >= 0 && v >= 0 && u < node.size() && v < node.size())
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    else
    {
        std::cout << "Invalid Node \n";
    }
}
void Graph::printgraph() const
{
    for (int i = 0; i < node.size(); i++)
    {
        std::cout << "Node : " << node[i] << "-->";
        for (int neighbor : adjList[i])
        {
            std::cout << " " << node[neighbor];
        }
        std::cout << "\n------------------------\n";
    }
    
}