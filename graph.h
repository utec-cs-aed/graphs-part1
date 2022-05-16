#include <list>
#include <vector>
#include <unordered_map>

template<typename TV, typename TE>
struct Edge;

template<typename TV, typename TE>
struct Vertex;

template<typename TV, typename TE>
class Graph;

//////////////////////////////////////////////////////

template<typename TV, typename TE>
struct Edge {
    Vertex<TV, TE>* vertexes[2];
    TE weight;
};

template<typename TV, typename TE>
struct Vertex {
    TV data;
    std::list<Edge<TV, TE>*> edges;
};

template<typename TV, typename TE>
class Graph{
private:    
    std::unordered_map<int, Vertex<TV, TE>*>  vertexes;
    
public:
    void insertVertex(int id, TV vertex);  // Creates a new vertex in the graph with some data and an ID
    bool deleteVertex(int id); // Deletes a vertex in the graph 
    void createEdge(int id1, int id2, TE w); // Creates a new edge in the graph with some data  
    bool deleteEdge(int startId, int endId); // Deletes an edge in the graph, it is not possible to search by the edge value, since it can be repeated 
    TE &operator()(string startId, string endId); // Gets the value of the edge from the start and end vertexes
    float density() const; // Calculates the density of the graph
    bool isDense(float threshold = 0.5) const; // Calculates the density of the graph, and determine if it is dense dependening on a threshold value    
    bool empty(); // If the graph is empty
    void clear(); // Clears the graph
    void display(); //show the graoh
    void displayVertex(int id); //show a vertex


    /*algorithms*/
    Graph<char, float> execKruskal();
    Graph<char, float> execPrim();
    Graph<char, float> execDFS();
    Graph<char, float> execBFS();
    bool isConnected(); // Detect if the graph is connected
};
