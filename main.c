#include "my_mat.h"
#include <stdio.h>

int mat[N][N];

int main()
{
  int i, j;
  char ch = 'A';
  while (ch != 'D')
  {
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
      inputMat(mat);
      break;

    case 'B':
      scanf("%d%d", &i, &j);
      if (i < 0 || i >= N || j < 0 || j >= N)
      {
        printf("there is no vertices %d, %d", i, j);
        ch = 'A';
        break;
      }
      isPathed(mat, i, j);
      printf("\n");
      break;

    case 'C':
      scanf("%d%d", &i, &j);
      if (i < 0 || i >= N || j < 0 || j >= N)
      {
        printf("there is no vertices %d , %d", i, j);
        ch = 'A';
        break;
      }
      shortestPath(mat, i, j);
      printf("\n");
      break;

    case 'D':
      return 0;
    }
  }
  return 0;
}