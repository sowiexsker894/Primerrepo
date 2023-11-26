#include <iostream>
#include "Grafo.h"

using namespace std;

int main() {
	//Crear el grafo
	CGrafo<int>* G = new CGrafo<int>();

	//Agregar Vértices
	G->adicionarVertice(0); //indice=0
	G->adicionarVertice(1); //indice=1
	G->adicionarVertice(2); //indice=2
	G->adicionarVertice(3); //indice=3
	G->adicionarVertice(4); //indice=4
	G->adicionarVertice(5); //indice=5
	G->adicionarVertice(6); //indice=6
	G->adicionarVertice(7); //indice=7
	G->adicionarVertice(8); //indice=8

	//Agregar los arcos
		// G->adicionarArco(posVertice, Vertice);
		// G->modificarArco(posVertice, posArco, pesoArco);

	//Vertice 0
	G->adicionarArco(0, 1); //0 -> 1, Arco posicion 0
	G->modificarArco(0, 0, 4);
	G->adicionarArco(0, 7);	//0 -> 7, Arco posicion 1
	G->modificarArco(0, 1, 8);

	//Vertice 1
	G->adicionarArco(1, 0); //1 -> 0, Arco posicion 0
	G->modificarArco(1, 0, 4);
	G->adicionarArco(1, 2); //1 -> 2, Arco posicion 1
	G->modificarArco(1, 1, 8);
	G->adicionarArco(1, 7); //1 -> 7, Arco posicion 2
	G->modificarArco(1, 2, 11);

	//Vertice 2
	G->adicionarArco(2, 1); //2 -> 1, Arco posicion 0
	G->modificarArco(2, 0, 8);
	G->adicionarArco(2, 3); //2 -> 3, Arco posicion 1
	G->modificarArco(2, 1, 7);
	G->adicionarArco(2, 8); //2 -> 8, Arco posicion 2
	G->modificarArco(2, 2, 2);

	//Vertice 3
	G->adicionarArco(3, 2); //3 -> 2, Arco posicion 0
	G->modificarArco(3, 0, 7);
	G->adicionarArco(3, 4); //3 -> 4, Arco posicion 1
	G->modificarArco(3, 1, 9);
	G->adicionarArco(3, 5); //3 -> 5, Arco posicion 2
	G->modificarArco(3, 2, 14);

	//Vertice 4
	G->adicionarArco(4, 3); //4 -> 3, Arco posicion 0
	G->modificarArco(4, 0, 9);
	G->adicionarArco(4, 5); //4 -> 5, Arco posicion 1
	G->modificarArco(4, 1, 10);

	//Vertice 5
	G->adicionarArco(5, 2); //5 -> 2, Arco posicion 0
	G->modificarArco(5, 0, 4);
	G->adicionarArco(5, 3); //5 -> 3, Arco posicion 1
	G->modificarArco(5, 1, 14);
	G->adicionarArco(5, 4); //5 -> 4, Arco posicion 2
	G->modificarArco(5, 2, 10);
	G->adicionarArco(5, 6); //5 -> 6, Arco posicion 3
	G->modificarArco(5, 3, 2);

	//Vertice 6
	G->adicionarArco(6, 5); //6 -> 5, Arco posicion 0
	G->modificarArco(6, 0, 2);
	G->adicionarArco(6, 7); //6 -> 7, Arco posicion 1
	G->modificarArco(6, 1, 1);
	G->adicionarArco(6, 8); //6 -> 8, Arco posicion 2
	G->modificarArco(6, 2, 6);

	//Vertice 7
	G->adicionarArco(7, 0); //7 -> 0, Arco posicion 0
	G->modificarArco(7, 0, 8);
	G->adicionarArco(7, 1); //7 -> 1, Arco posicion 1
	G->modificarArco(7, 1, 11);
	G->adicionarArco(7, 6); //7 -> 6, Arco posicion 2
	G->modificarArco(7, 2, 1);
	G->adicionarArco(7, 8); //7 -> 8, Arco posicion 3
	G->modificarArco(7, 3, 7);

	//Vertice 8
	G->adicionarArco(8, 2); //8 -> 2, Arco posicion 0
	G->modificarArco(8, 0, 2);
	G->adicionarArco(8, 6); //8 -> 6, Arco posicion 1
	G->modificarArco(8, 1, 6);
	G->adicionarArco(8, 7); //8 -> 7, Arco posicion 2
	G->modificarArco(8, 2, 7);


	//Imprimir los vértices con sus arcos
	for (int i = 0; i < G->cantidadVertices(); ++i) {
		cout << "Vertice[" << i << "]: " << G->obtenerVertice(i) << endl;
		for (int j = 0; j < G->cantidadArcos(i); j++)
		{
			cout << "\tArco[" << j << "]: " << G->obtenerVerticeLlegada(i, j) << ", peso: " << G->obtenerArco(i, j) << " ";
		}
		cout << endl;
	}

	// TEST
	//cout << "5->3: " << G->obtenerVerticeLlegada2(5, 3) << endl;

	// Dijkstra desde el Origen: Vertice: 0
	G->dijkstra(0);

    
	cin.get();
	return 0;
}

/*
REF:
https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/
*/