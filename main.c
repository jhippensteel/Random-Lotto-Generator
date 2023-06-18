#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdint.h>


int main() {
    printf("Number of digits >>"); int numDigits; scanf("%d", &numDigits);
    int userSeq[numDigits]; int genSeq[numDigits];
    int64_t count = 0;
    //srand(time(0));

    for (int i = 0; i<numDigits;i++){
        printf("Digit >>"); scanf("%d", &userSeq[i]);
    }

    bool isEqual = false;
    long startTime = clock();
    while(!isEqual){
        count ++;
        if(count % 10000000 == 0) {
            printf("\nDay %lld :: Sequences per second: %lld", count, count / ((clock() - startTime) / CLOCKS_PER_SEC));
        }
        isEqual = true;
        for (int i=0;i<numDigits;i++){
            genSeq[i] = rand() % (9 - 1 + 1) + 1;
            if(userSeq[i] != genSeq[i]){
                isEqual = false;
            }
        }

    }

    return *genSeq;
}
