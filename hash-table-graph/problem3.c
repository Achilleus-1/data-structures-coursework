#include <stdlib.h>
#include <stdio.h>

#include "graph.h"
/*TODO: only the graph data structure has been included, make sure to "#include" any other data structure .h files if you need them.*/

/*TODO: you are responsible for completing the provided Makefile; you only need to fill in the executable section at the bottom of the Makefile with the gcc command and necessary .o files; make sure to include graph.o and hashTableGraph.o (it will compile properly otherwise) as it is included here*/

/*TODO: Notate if you used a partner and the runtime of your implemented algorithm
Partner:
Big O Time Complexity of below algorithm:
*/

int main(){

	/* The following example is from Assignment 4, problem 3 example 1 description (see the pdf for more details). Vertices: {A,B,C,D}, Edges: {(A, B),(A, C),(B, D),(C, A),(D, A)}*/
	Graph* g1 = createGraph(4);
	addVertex(g1,'A');
	addVertex(g1,'B');
	addVertex(g1,'C');
	addVertex(g1,'D');
	setEdge(g1,'A','B',1);
	setEdge(g1,'A','C',1);
	setEdge(g1,'B','D',1);
	setEdge(g1,'C','A',1);
	setEdge(g1,'D','A',1);
	
	/* The following example is from Assignment 4, problem 3 example 2 description (see the pdf for more details). Vertices: {A,B,C,D}, Edges: {(A, B), (B, D), (C, A), (D, A)}*/
	Graph* g2 = createGraph(4);
	addVertex(g2,'A');
	addVertex(g2,'B');
	addVertex(g2,'C');
	addVertex(g2,'D');
	setEdge(g2,'A','B',1);
	setEdge(g2,'B','D',1);
	setEdge(g2,'C','A',1);
	setEdge(g2,'D','A',1);
	
	/*TODO: code the solution to problem 3 here, the 2 examples above have been provided to show that your solution works (and are the same as the ones on the Assignment 4 pdf); for example 1 you should print out "Strongly Connected" and for example 2 you should print out "Not Strongly Connected"; if you need to check the current path matrix you can call "printPathMatrix(g1)" or "printPathMatrix(g2)".*/
	
	freeGraph(g1);
	freeGraph(g2);

}

/*TODO (optional): you may create additional helper functions to solve your problem if you wish; please be sure to declare your functions before the "main" function or you will likely get some errors*/

