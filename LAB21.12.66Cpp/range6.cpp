/* LANG : C++ */
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main() {
    int n,i, max=-1, min=20;
    for ( i = 1; i < 10; i++) {
        do {
            cin >> n;
            if (n==0)
            {
            cout << max - min;
            exit(0);
            }

        } while (n<10 || n>20);
        if (max<n)
        {
        max=n;
        }
        if (min>n)
        {
        min=n;
        }
    }
    cout << max - min;
    
    return 0;
}
