#include "functions.h"
#include "functions.cpp"


int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of squares: " << sumOfSquares(n) << endl;
    cout << "Factorial of the number is " << findFactorial(n) << endl;

    return 0;
}