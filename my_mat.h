#define N 10
#define True 1
#define False 0

/**
 * gets a matrice input 
 **/
int inputMat();
/**
 * configures the matrice's shortest path between vertexes
 **/
int shortestPathConfig();

/**
 * returns whether there's path between vertex i to vertex j
 **/
int isPathed(int i, int j);

/**
 * returns the shortest path between vertex i to vertex j
 * if none exists - returns -1
 * */
int shortestPath(int i, int j);