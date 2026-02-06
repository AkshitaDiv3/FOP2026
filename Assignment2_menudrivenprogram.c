#include<stdio.h>
void main(){
    float a,b;
    int cho;
    printf("Enter two numbers");
    scanf("%f%f", &a,&b);
    printf("Enter 1 for add,2 for sub,3 for multiply and 4 for div");
    scanf("%d",&cho);
    switch(cho){
        case 1:
        printf("%f",a+b);
        break;
        case 2:
        printf("%f",a-b);
        break;
        case 3:
        printf("%f",a*b);
        break;
        case 4:
        printf("%f",a/b);
        break;
        default:
        printf("Invalid");
        break;

    }
}
