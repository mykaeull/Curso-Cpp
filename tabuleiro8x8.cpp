#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int xa, ya, xb, yb, xabs, yabs;
    int movimento;
    bool acabou = false;

    cin >> xa >> ya >> xb >> yb;

    while ((xa != 0) && (ya != 0) && (xb != 0) && (yb != 0)){
        xabs =  std::abs(xb - xa);
        yabs =  std::abs(yb - ya);

        while (acabou != true) {
            if ((xabs == 0) && (yabs == 0)) {
                movimento = 0;
                cout << movimento;
                acabou = true;
            }
            else if (xabs == 0) {
                movimento = yabs - 1;
                cout << movimento;
                acabou = true;
            }
            else if (yabs == 0) {
                movimento = xabs - 1;
                cout << movimento;
                acabou = true;
            }
            else if (xabs != yabs) {
                movimento = (xabs + yabs) - 1;
                cout << movimento;
                acabou = true;
            }
            else if (xabs == yabs) {
                movimento = xabs - 1;
                cout << movimento;
                acabou = true;
            }
        }
        movimento = 0;
        acabou = false;
        cout << "\n";
        cin >> xa >> ya >> xb >> yb;
    }

    return 0;
}