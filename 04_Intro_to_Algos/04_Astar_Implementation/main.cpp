#include<iostream>
#include<vector>
#include<queue>
#include<cmath> // abs
#include<algorithm>


// Minimal node model
struct Node
{
    int id;
    int row,col;
    int parentId = -1;

    /*
    The idea :
    Every node gets three numbers:
    g is the real cost from the start to this node.
    h is a guess of the remaining cost to the goal (the heuristic).
    f = g + h is the estimated total cost of a path through this node.
    */
    int g = 0; // cost so-far
    int h = 0; // heuristic-to-goal
    int f = 0; // g + h

    std::vector<int> neighbors; // neighbor IDs

};

// Comparator : Priority_queue returns the element with smallest f first
struct CompareF
{
    bool operator()(const Node& a, const Node& b) const
    {
        return a.f > b.f; // min-heap : f
    }
};

/*  Manhattan distance This is Manhattan distance: how many rows plus columns separate two cells. 
    It fits a grid where you move up, down, left or right at cost 1. It never overestimates the true cost (admissible), 
    and that is what guarantees A* finds the shortest path. */
int heuristic (const Node& a, const Node& b)
{
    return std::abs(a.row - b.row) + std::abs(a.col - b.col);
}

int main()
{
    std::vector<Node> nodes(9);  // --- Minimal demo graph (3x3 grid nodes 0..8) ---
    /*
    Layout, with id = r*3 + c:
    0 1 2
    3 4 5
    6 7 8
    */
    int idx = 0;
    // .. populate nodes (ids 0..N-1, row/col, neighbors)
    for (int r = 0; r < 3 ; ++r)
    {
        for (int c = 0; c < 3 ; ++c)
        {
            nodes[idx] = Node{ idx, r,c, -1, 0 ,0 ,0, {}};
            ++idx;
        }
    }
    auto id_of = [](int r, int c) {return r * 3 + c; };
    for (int r = 0; r < 3; ++r )
    {
        for (int c = 0; c < 3; ++c )
        {
            int me = id_of(r, c);
            if (r > 0) nodes[me].neighbors.push_back(id_of(r-1, c));
            if (r < 2) nodes[me].neighbors.push_back(id_of(r+1, c));
            if (c > 0) nodes[me].neighbors.push_back(id_of(r, c-1));
            if (c < 2) nodes[me].neighbors.push_back(id_of(r, c+1));
        }
    }


    int startId = 0;
    int goalId = static_cast <int> (nodes.size()) - 1;

    std::priority_queue <Node, std:: vector<Node>, CompareF> openSet;
    std::vector<bool> closed(nodes.size(), false); // visited/closed

    // Initialize start
    nodes[startId].g = 0;
    nodes[startId].h = heuristic(nodes[startId],nodes[goalId]);
    nodes[startId].f = nodes[startId].g + nodes[startId].h;
    openSet.push(nodes[startId]);
    // ============================
    // TODO: MAIN A* SEARCH LOOP
    // ----------------------------
    // While the open set is not empty:
    bool found = false; 
    while (!openSet.empty())
    {
        //   1) Pop the node with the smallest f (call it 'current').
        Node current = openSet.top();
        openSet.pop();
        //   2) Check igf goal is reached, If current.id == goalId:
        if (current.id == goalId)
        {
            //        - Print "Goal reached!" and break.
            std::cout << "Goal reached!\n";
            found = true; 
            break;        
        }
        //   3) If current is already closed, continue.
        if(closed[current.id])
        {
            continue;
        }    
        //   4) Mark current as closed.
        closed[current.id] = true;
        //   5) Explore nieghbors, For each neighborId of current:
        for (int neighborID : current.neighbors)
        {
            // Skip if neighbor is closed
            if(closed[neighborID])
            {
                continue;
            }
            // Compute tentativeG = current.g + 1 (unit edge cost).
            int tentativeG = current.g + 1;
            // If tentativeG improves neighbor.g (or neighbor.g == 0 for first set):
            if(nodes[neighborID].parentId == -1 || tentativeG < nodes[neighborID].g)
            {
                // Update neighbor.g = tentativeG
                nodes[neighborID].g = tentativeG;
                // neighbor.h = heuristic(neighbor, goal)
                nodes[neighborID].h =  heuristic(nodes[neighborID], nodes[goalId]);
                // neighbor.f = neighbor.g + neighbor.h
                nodes[neighborID].f = nodes[neighborID].g + nodes[neighborID].h ;
                // * neighbor.parentId = current.id
                nodes[neighborID].parentId = current.id;
                // Push updated neighbor into openSet
                openSet.push(nodes[neighborID]);
            }
        }
    }
    
    if (found)
    {
        std::vector<int> path;
        for (int id = goalId ; id != -1; id = nodes[id].parentId)
        {
            path.push_back(id);        
        }
        std::reverse (path.begin(), path.end());
        for (size_t i = 0; i < path.size(); i++)
        {
            std::cout << path[i];
            if (i+1 < path.size())
            {
                std::cout << "->";
            }
        }
        std::cout << "\n TOtal const : " << nodes[goalId].g << "\n";
    }
    else
    {
        std::cout << "No path found\n";
    }
    return 0 ;
}
