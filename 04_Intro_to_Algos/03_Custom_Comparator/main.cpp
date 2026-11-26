#include <iostream>
#include <queue>
#include <vector>
#include<string>
/*
A std::priority_queue is a container where the item with the highest priority always comes out first, 
no matter what order you put things in.
An everyday picture:
Think of an emergency room. People arrive in any order, but the most serious case is treated next, not the person who arrived first. 
A regular queue is first-in, first-out. A priority queue is "most important out first."
*/


// A struct is a class whose members are public by default
// City structure to hold name and distance (used as priority)
// City bundles two pieces of data: a name and a distance
struct City{
    std::string name;
    int distance;
};

// Sample cities
// "Cities" is a resizable array whose elements are City objects
std::vector<City> cities =
{
    // The initializer list
    // This is aggregate initialization, and it works because City has no constructors, 
    // no private members and no virtual functions.
    {"New York", 20},
    {"Boston", 5},
    {"Chicago", 15},
    {"Denver", 30}
};

// Custom comparator for min-heap by city distance
class CompareByDistance
{
    public:
    // A functor whose operator() takes two arguments and returns bool is the standard shape of a comparator: "does a come before b?
        bool operator()(int a, int b) const
        {
            // The > operator. std::priority_queue is a max-heap by default, so people write a > comparator to flip it into a min-heap
            return cities[a].distance > cities[b].distance;
        }
};


/* This program puts four city indices into a priority queue, then pulls them out one at a time in order of smallest distance. 
   It uses the City struct, the cities vector and the CompareByDistance functor from earlier snippets.
*/
int main()
{
    // Priority queue of city indices, ordered by lowest distance
    // Priority queu -> is a < b
    // Denver < New York - > False !
    // Denver < New York - > True !

    /*
    template<
    class T, 
    class Container = std::vector<T>, 
    class compare = std::less<typename Container::value_type>
    > class priority_queue;
    */
    // ---------------------------------------
    /*
    The queue :
    It holds int s, which are indices into cities.
    It stores them in a std::vector<int>.
    It orders them with your CompareByDistance, replacing std::less.
    */    
    std::priority_queue<int, std::vector<int>, CompareByDistance> cityQueue;

    // Push city indices into the priority queue
    // Each push inserts the index and re-arranges the internal heap using your comparator. 
    // The insertion order doesn't affect the result.
    cityQueue.push(0); // New York
    cityQueue.push(1); // Boston
    cityQueue.push(2); // Chicago
    cityQueue.push(3); // Denver

    std::cout << "--------- City Priority Queu (Min Distance FIrst)--- \n";
    while (!cityQueue.empty()) // Each pass:
    {
        int id = cityQueue.top(); // top() reads the highest-priority index without removing it.
        // looks up that city in cities and prints it
        std::cout << cities[id].name << " (distance = " << cities[id].distance << ")\n";
        // pop() removes it, so the next-best item rises to the top.
        cityQueue.pop();

        // With your CompareByDistance, comp(a, b) is distance[a] > distance[b]. 
        // Farther cities are lower priority, so the closest ends up on top. That is a min-heap.
    }
}