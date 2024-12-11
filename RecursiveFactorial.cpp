#include <iostream>
using namespace std;

int factorical (int);
int main () {
    int n, result;
    cout << "Enter a non-negative number: ";
    cin >> n;
    result = factorical(n);
    cout << "Factorical of " << n << "=" << result;
    return 0;
}

int factorical(int n) {
    if (n>1){
        return n * factorical(n-1);
    } else {
        return 1;
    }
}