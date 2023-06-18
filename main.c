#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int main() {
    printf("Number of digits >>"); int numDigits; scanf("%d", &numDigits);
    int userSeq[numDigits]; int genSeq[numDigits];
    int count = 0;
    //srand(time(0));

    for (int i = 0; i<numDigits;i++){
        printf("Digit >>"); scanf("%d", &userSeq[i]);
    }

    bool isEqual = false;
    int startTime = clock();
    while(!isEqual){
        count ++;
        printf(" Sequences per second: %f\n%s %d :: ",(float)count/((clock()-startTime)/CLOCKS_PER_SEC), "Day ", count);

        isEqual = true;
        for (int i=0;i<numDigits;i++){
            genSeq[i] = rand() % (9 - 1 + 1) + 1;
            printf(" %d", genSeq[i]);
            if(userSeq[i] != genSeq[i]){
                isEqual = false;
            }
        }

    }

    return 0;
}
