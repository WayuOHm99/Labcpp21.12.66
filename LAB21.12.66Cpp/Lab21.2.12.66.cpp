/* LANG : C++ */
#include <iostream>
#include <string>

using namespace std;
int main() {
    int n, i, x = 1;

    do {
    cout << "Enter number(0-10): ";
    cin >> n;
    } while (n < 0 || n > 10);

    for (i = 1; i <= n; ++i) {
        x *= i;
    }

    cout << "! = " << x << endl;

    return 0;
}
