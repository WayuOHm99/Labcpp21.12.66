/* LANG : C++ */
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    char ch, mychar;
    int count = 0;

    cout << "Please enter word mychar: ";
    cin >> mychar;

    do {
        cout << "Please enter word ch: ";
        cin >> ch;
        count++;

        if (ch != mychar) {
            cout << "\n";
        }
    } while (ch != mychar);

    cout << "Nice Number of times: " << count << endl;

    return 0;
}
