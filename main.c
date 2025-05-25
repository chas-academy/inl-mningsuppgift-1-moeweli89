#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
 
    int kast[100];

    int antal[6] = {0, 0, 0, 0, 0, 0};

    int summa = 0;

    for (int i = 0; i < 100; i++) {
     
        int kastat = (rand() % 6) + 1;

        kast[i] = kastat;
t
        antal[kastat - 1]++;

       
        summa = summa + kastat;
    }

    for (int i = 0; i < 6; i++) {
        printf("%d\n", antal[i]);
    }

 
    printf("%d\n", summa);

   
    float medel = summa / 100.0;
    printf("%.1f\n", medel);

   
}

    return 0;
}