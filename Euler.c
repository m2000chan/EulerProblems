#include <stdio.h>

//Problem 48

long Problem48(){
    long i = 0;
    int x;
    for (x = 1; x <= 1000; x++){
        i += x*x; // adds self powers
        if (i > 9999999999){
            i = i % 10000000000; //removes all bu alst 10 digits
        }
    }
    return i;
}

//Problem 6

long Problem6(){
    long i = 0; //Sum of squares
    long j = 0; //Square of sums
    int k;
    for (k = 0; k <= 100; k++){
        i += k*k;
        j += k;
    }
    j = j*j;
    return j - i;
    
}

//Problem5

int main() {
    int i = 20;
    while((i%20 != 0) || (i%19 != 0) || (i%18 != 0) || (i%17 != 0 ) || (i%16 != 0) || (i%15 != 0) || (i%14 != 0) || (i%13 != 0 ) || (i%12 != 0) || (i%11 != 0 )){
        i += 20;
    }
    
    printf("Problem 5:\nSmallest common multiple of 1-20: %d\n\n", i);
    printf("Problem6\nDifference between Sum of Squares and Square of sums: %ld\n\n", Problem6());
    printf("Problem 48:\nLast 10 digits of self powers: %ld\n", Problem48());
}
