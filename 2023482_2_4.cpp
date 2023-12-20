#include <iostream>
using namespace std;

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
int calculatePermutation(int n, int r) {
    if (n < r) {
        cout << "Error: n should be greater than or equal to r." << endl;
        return -1;  // Return -1 to indicate an error
    }
    int result = factorial(n) / factorial(n - r);
    return result;
}
int main() {
    int N, r;

    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Enter the value of r: ";
    cin >> r;

    int result = calculatePermutation(N, r);

    if (result != -1) {
        cout << "Permutation (" << N << "P" << r << ") is: " << result << endl;
    }

    return 0;
}
