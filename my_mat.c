#include "my_mat.h"
#include <math.h>
#include <stdio.h>

void shortestPathConfig(int mat[N][N])
{
    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i == j) 
                {
                    //have to consider that no path is indicated by 0
                    if (mat[i][j] != 0)
                        mat[i][j] = fmin(mat[i][j], mat[i][k] + mat[k][j]);
                    else
                        mat[i][j] = mat[i][k] + mat[k][j];
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
            if (scanf("%d", &mat[i][j]) < 1)
                break;
        }
    }
    shortestPathConfig(mat);
}



void isPathed(int mat[N][N],int i, int j)
{
    if (mat[i][j])
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
    if (mat[i][j] != 0)
        printf("%d", mat[i][j]);
    else
        printf("-1");
}