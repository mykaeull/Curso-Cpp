#include <iostream>

using namespace std;

int fatorial(int num);

int main() {
    int val, resp;
    
    val = 3;

    resp = fatorial(val);

    cout << "\n" << resp << "\n";

    return 0;
}

int fatorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * fatorial(num - 1);

}