#include "my_mat.h"
#include <math.h>
#include <stdio.h>

/** pseudo for all pairs shortest path
n=10
for(k=0; k<n;k++)
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i,j] = min {a[i,j], a[i,k]+a[k+j]}
*/

void inputMat(int mat[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (scanf("%d", &mat[i][j]) < 1)
                return 1;
        }
    }
    shortestPathConfig(mat);
}

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