/* LANG : C++ */
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
    int n,i, max, min;

    for (int i = 0; i < 10; ++i) {
        do {
            cout << "Please enter a number (10 - 20), or 0 to stop: ";
            cin >> n;

            if (n == 0) {
                return 0;
            }

            if (n < 10 || n > 20) {
                cout << "Invalid input. Please try again.\n";
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

        // Clear remaining input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Range: " << max - min << endl;

    return 0;
}
