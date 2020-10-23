#include <iostream>
#include "graph.h"

using namespace std;

struct City {
    int id;
    string name;
    double latitude;
    double longitude;
};

struct Airport {
    int id;
    string name;
    string city;
    string country;
    double latitude;
    double longitude;
};

int main(int argc, char *argv[]) {
    City lima;
    Graph<City, double> cities;
    cities.insertVertex(lima.id, lima);
    cities.findById(lima.id);

    Airport jorgechaves, a2;
    Graph<Airport, double> airports;
    airports.insertVertex(jorgechaves.id, jorgechaves);
    airports.insertVertex(a2.id, a2);
    airports.createEdge(jorgechaves.id, a2.id, 250);
    return EXIT_SUCCESS;
}