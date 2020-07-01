#include <iostream>

using namespace std;

int main() {
    int x, i = 6;

    cin >> x;
    cout << "\n";

    while (i > 0) {
        if (x%2 != 0) {
            cout << x << "\n";
            i--;
        }
        x += 1;
    }



    return 0;
}