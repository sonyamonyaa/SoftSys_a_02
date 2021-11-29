#include "my_mat.h"
#include <math.h>
#include <stdio.h>

#define MAX 9999
void shortestPathConfig(int mat[N][N])
{
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i != j) 
                {
                    mat[i][j] = fmin(mat[i][j], mat[i][k] + mat[k][j]);
                }
            }
        }
    }
}

void inputMat(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 0 && i!=j) {
                mat[i][j] = MAX;
            }
        }
    }
    shortestPathConfig(mat);
}



void isPathed(int mat[N][N],int i, int j)
{
    if (mat[i][j] != MAX && mat[i][j] != 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

void shortestPath(int mat[N][N],int i, int j)
{
    if (mat[i][j] != MAX && mat[i][j] != 0)
        printf("%d", mat[i][j]);
    else
        printf("-1");
}

