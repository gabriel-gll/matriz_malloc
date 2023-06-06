#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int tam=0,i=0,j=0;
    int **n;
    printf("Digite a ordem da matriz\n");
    scanf("%d",&tam);

    n=(int**)malloc(tam*sizeof(int*));
    for(i=0;i<tam;i++){
        n[i]=(int*)malloc(tam*sizeof(int));
    }

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            n[i][j]=rand()%10+1;
        }
    }

    printf("Matriz gerada:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("%4d",n[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Elementos da diagonal principal da matriz:\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i == j){
                printf("%d",n[i][j]);
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Elementos da diagonal secundaria da matriz\n");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i+j == tam-1){
                printf("%d",n[i][j]);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<tam;i++){
        free(n[i]);
    }
    free(n);

    system("pause");
    return 0;
}