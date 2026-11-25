#include<iostream>
#include"graph.hpp"
#include<stdio.h>

int main()
{
    Graph gra1;
    //Comment
    gra1.addNode("Dharwad");
    gra1.addNode("Bengaluru");
    gra1.addNode("Delhi");
    gra1.addNode("Bijapur");

    gra1.addEdge(0,1);
    gra1.addEdge(0,2);
    gra1.addEdge(2,3);
    gra1.addEdge(3,1);


    std::cout << "----Printing City Flight connection graph----\n";
    gra1.printgraph();

    return 0;

}