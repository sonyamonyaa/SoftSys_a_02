#define N 10
#define True 1
#define False 0

/**
 * gets a matrice input 
 **/
void inputMat(int mat[N][N]);

/**
 * returns whether there's path between vertex i to vertex j
 **/
int isPathed(int mat[N][N],int i, int j);

/**
 * returns the shortest path between vertex i to vertex j
 * if none exists - returns -1
 * */
int shortestPath(int mat[N][N],int i, int j);