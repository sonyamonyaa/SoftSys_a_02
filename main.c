#include "my_mat.h"
#include <stdio.h>

int mat[N][N];

int main(){
    int i, j;
    char ch = 'A';
    while(ch != 'D'){
        scanf("%c", &ch);

        switch(ch){
            case 'A':
              inputMat(mat);
              break;

            case 'B':
              scanf("%d%d", &i, &j);
              if(i < 0 || i >= N){
                  printf("their is no vertes %d", i);
                  ch = 'A';
                  break;
              }
              if(j < 0 || j >= N){
                  printf("their is no vertes %d", j);
                  ch = 'A';
                  break;
              }
              isPathed(mat, i, j);

            case 'C':
              scanf("%d%d", &i, &j);
              if(i < 0 || i >= N){
                  printf("their is no vertes %d", i);
                  ch = 'A';
                  break;
              }
              if(j < 0 || j >= N){
                  printf("their is no vertes %d", j);
                  ch = 'A';
                  break;
              }
              shortestPath(mat, i, j);

            case 'D':
              break;

            default:
              printf("you didnt enter a legal command! plausible options: A, B, C or D");
        }
    }
    return 0;
}