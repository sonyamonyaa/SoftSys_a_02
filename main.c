#include <my_mat.h>
#include <stdio.h>

int mat[N][N];

void main(){
    char ch = 'A';
    while(ch != 'D'){
        scanf("%c", &ch);

        switch(ch){
            case 'A':
              inputMat(mat);

            case 'B':
              int i, j;
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
              isPathed(mat[N][N],i, j);

            case 'C':
              int i, j;
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
              shortestPath(mat[N][N],i, j);

            case 'D':
              break;

            default:
              printf("you didnt enter a legal command! plausible options: A, B, C or D");
        }
    }
}