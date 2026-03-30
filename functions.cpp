#include "functions.h"


int sumOfSquares(int n) {
    // Base case
    if (n <= 1)
    {
        return n;
    }

    // Recursive case
    return (n * n) + sumOfSquares(n - 1);
}

int findFactorial(int n) {
    // Base case
    if (n <= 1)
    {
        return 1;
    }

    // Recursive case
    return n * findFactorial(n - 1);
}