/* LANG : C++ */
#include <iostream>
#include <limits>

using namespace std;

int main() {

    int n,i, max, min;

    for (int i = 0; i < 10; ++i) {
        do {
            cout << "Plz enter number (10 - 20), Or 0 Stop: ";
            cin >> n;

            if (n == 0) {
                return 0;
            }

            if (n < 10 || n > 20) {
            cout << "again\n";
                
            }
        } while (n < 10 || n > 20);

        if (i == 0) {
            max = min = n;
        } else {
            if (n > max) {
                max = n;
            } else if (n < min) {
                min = n;
            }
        }
    }

    cout << "range: " << max - min << endl;

    return 0;
}
