#include<iostream>
#include<vector>

struct Node
{
    int id;
    bool visited {false};
    Node* parent = nullptr;

    void mark()
    {
        visited = true;
    }
};

int main()
{
    Node a{0}, b{1}, c{2};

    Node* current = &a;

    std::vector<Node*> neighbors = {&b, &c};

    // TODO: Mark current as visited using a pointer call.
    current->mark();
    // TODO: For each neighbor pointer:
    for (Node* neighbor : neighbors)
    {
        neighbor->parent = current;
        neighbor-> mark();
    }
    //   - set neighbor->parent = current
    //   - mark neighbor visited via neighbor->mark()

    // TODO: Print each neighbor's id, visited, and parent id.
    for(Node* neighbor : neighbors)
    {
        std::cout << "Neighbor id = " << neighbor->id << std::endl;
        
        std::cout << "Visited = ";
        if(neighbor->visited)
        {
            std::cout << "True \n";
        }
        else
        {
            std::cout << "False \n";
        }
        
        std::cout << "Parent = ";
        if(neighbor->parent != nullptr)
        {
            std::cout << neighbor->parent->id<< std::endl;
        }
        else
        {
            std::cout << -1;
        }

        std::cout << "----------\n";


    }
    return 0;

    return 0;
}
