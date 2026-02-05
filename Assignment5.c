#include<stdio.h>
void main(){
     int a [2][2],i,j;
     printf("Enter element");
     for(i=0;i<=1;i++){ 
     for(j=0;j<=1;j++){
        scanf("%d", &a[i][j]);

    }
}
    printf("The matrix is:/n");


for(i=0;i<=1;i++){
    for(j=0;j<=1;j++){
        printf("%d",  a[i][j]);
    }
    printf("\n");
}

}
