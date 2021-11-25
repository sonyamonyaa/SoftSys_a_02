#ifndef _MY_MAT_H_
    #define _MY_MAT_H_
#define N 10

/**
 * gets a matrice input 
 **/
void inputMat(int mat[N][N]);

/**
 * returns whether there's path between vertex i to vertex j
 **/
void isPathed(int mat[N][N],int i, int j);

/**
 * returns the shortest path between vertex i to vertex j
 * if none exists - returns -1
 * */
void shortestPath(int mat[N][N],int i, int j);
#endif