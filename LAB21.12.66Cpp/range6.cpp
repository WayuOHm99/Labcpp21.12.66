/* LANG : C++ */
#include <iostream>

int main() {
    int n, max = -1, min = 21;

    for (int i = 0; i < 10; ++i) {
        std::cin >> n;

        if (n == 0) {
            break;
        }

        if (n >= 10 && n <= 20) {
            if (n > max) {
                max = n;
            }

            if (n < min) {
                min = n;
            }
        } else {
            --i;
        }
    }

    if (max != -1 && min != 21) {
        int range = max - min;
        std::cout << range << std::endl;
    }

    return 0;
}
