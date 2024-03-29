#include <iostream>
#include "graph.h"

using namespace std;

void execExample1();
void execExample2();

int main(int argc, char *argv[])
{
  execExample1();
  execExample2();
  return 0;
}

void execExample1()
{
  Graph<char, float> graph;
  graph.insertVertex(1, 'J');
  graph.insertVertex(2, 'F');
  graph.insertVertex(3, 'C');
  graph.insertVertex(4, 'D');
  graph.insertVertex(5, 'A');
  graph.insertVertex(6, 'H');
  graph.insertVertex(7, 'B');
  graph.insertVertex(8, 'E');
  graph.insertVertex(9, 'G');
  graph.insertVertex(10, 'I');

  graph.createEdge(1, 2, 4);   // J - F | 4
  graph.createEdge(2, 3, 7);   // F - C | 7
  graph.createEdge(3, 4, 11);  // C - D | 11
  graph.createEdge(2, 4, 58);  // F - D | 58
  graph.createEdge(2, 5, 17);  // F - A | 17
  graph.createEdge(1, 5, 14);  // J - A | 14
  graph.createEdge(3, 6, 24);  // C - H | 24
  graph.createEdge(4, 5, 42);  // D - A | 42
  graph.createEdge(1, 8, 5);   // J - E | 5
  graph.createEdge(4, 6, 26);  // D - H | 26
  graph.createEdge(4, 7, 19);  // D - B | 19
  graph.createEdge(5, 7, 5);   // A - B | 5
  graph.createEdge(5, 8, 11);  // A - E | 11
  graph.createEdge(6, 7, 64);  // H - B | 64
  graph.createEdge(8, 10, 29); // E - I | 29
  graph.createEdge(6, 9, 3);   // H - G | 3
  graph.createEdge(7, 9, 52);  // B - G | 52
  graph.createEdge(7, 10, 51); // B - I | 51
  graph.createEdge(10, 9, 33); // I - G | 33

  //display the graph as adjacency list
  /*
   E:  I(29), J(5), A(11)
   J:  A(14), F(4)
  */
  graph.display();

  //display an object
  /*
   E:  I(29), J(5), A(11)      
  */
  cout << "\ndisplayVertex(6)\n";
  graph.displayVertex(6);

  cout << "\nexecKruskal()\n";
  Graph<char, float> mst1 = graph.execKruskal();
  mst1.display();

  cout << "\nexecPrim()\n";
  Graph<char, float> mst2 = graph.execPrim();
  mst2.display();

  cout << "\nexecDFS()\n";
  Graph<char, float> dsf = graph.execDFS();
  dsf.display();

  cout << "\nexecBFS()\n";
  Graph<char, float> bfs = graph.execBFS();
  bfs.display();

  cout << "isConnected(): " << std::boolalpha << graph.isConnected() << endl;
}

void execExample2(){
  //TODO: proponer otro ejercicio
}
