#include <iostream>

using namespace std;

int main() {
    int x, n = 1;

    cin >> x;
    
    while(x >= n) {
        if (x % n == 0) {
            cout << n << "\n";
        }
        n += 1;
    }

    return 0;
}