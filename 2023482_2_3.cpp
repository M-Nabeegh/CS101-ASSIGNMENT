#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int st_num, end_num;
    cout << "Enter the starting number: ";
    cin >> st_num;
    cout << "Enter the ending number: ";
    cin >> end_num;
    cout << "Prime numbers between " << st_num << " and " << end_num << " are: " << endl;
    for (int i = st_num; i <= end_num; ++i) {
        if (isPrime(i)) {
            cout << i << ",";
        }
    }

    cout << endl;

    return 0;
}
