#include <iostream>

using namespace std;

int main() {
    int n, v;

    cin >> v;

    for(int i=0; i < v; i++) {
         cin >> n;

        if (n%2 == 0) {
            cout << "0" << "\n";
        } else {
            cout << "1" << "\n";
        }
        n = 0;
    }
   



    return 0;
}