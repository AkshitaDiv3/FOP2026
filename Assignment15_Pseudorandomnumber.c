#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0)); 

    printf("5 pseudo-random numbers (0-99):\\n");

    for (int i = 0; i < 5; i++) {
      
        int random_num = rand() % 100; 
        printf("%d\\n", random_num);
    }

    return 0;
}
