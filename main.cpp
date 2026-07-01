#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter number:" ;
    cin >> n;
    if (n == 1) {
        cout << "it is neither a prime number nor a composite number:" ;
    }
    else {
        int x = 0;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                x = 1;
            }
        }
        if (x == 0) {
            cout << "prime number:" ;
        }
        else {
            cout << "composite number:" ;
        }
    }
    return 0;
}
