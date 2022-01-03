/**************************************************************************************************
 * Implementation of the TAD Graph
**************************************************************************************************/

#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include "Node.h"
#include <fstream>
#include <stack>
#include <list>
#include <sstream>

using namespace std;

class Graph{

    //Atributes
    private:
        int order;
        int number_edges;
        bool directed;
        bool weighted_edge;
        bool weighted_node;
        Node* first_node;
        Node* last_node;
        stringstream printer;

    public:
        //Constructor
        Graph(int order, bool directed, bool weighted_edge, bool weighted_node);
        //Destructor
        ~Graph();
        //Getters
        int getOrder();
        int getNumberEdges();
        bool getDirected();
        bool getWeightedEdge();
        bool getWeightedNode();
        Node* getFirstNode();
        Node* getLastNode();
        //Other methods
        void insertNode(int id);
        void insertEdge(int id, int target_id, float weight);
        void removeNode(int id);
        bool searchNode(int id);
        Node* getNode(int id);

        //methods phase1
        void topologicalSorting();
        void breadthFirstSearch(ofstream& output_file);
<<<<<<< HEAD
        Graph* getVertexInduced(int* listIdNodes);
        Graph* agmKuskal();
=======
        Graph* getVertexInduced();
        string agmKuskal(Graph* graph);
>>>>>>> rodrigo
        Graph* agmPrim();
        string Graph::floydWarshall(int idOrigin, int idDestiny);
        string Graph::dijkstra(int idOrigin, int idDestiny);

        //methods phase1
        float greed();
        float greedRandom();
        float greedRactiveRandom();
    private:
        //Auxiliar methods

};

#endif // GRAPH_H_INCLUDED
