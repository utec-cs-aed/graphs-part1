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
    void insertVertex(int id, TV vertex);   
    void createEdge(int id1, int id2, TE w);     
    void display();
    void displayVertex(int id);
    bool findById(int id);
    void clear();

    /*algorithms*/
    Graph<char, float> execKruskal();
    Graph<char, float> execDFS();
    Graph<char, float> execBFS();
    bool isConnected();
};
