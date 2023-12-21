/* LANG : C++ */
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    char ch, mychar;
    int count ;
    
    count = 0;
    cin >> mychar;
    while (ch != mychar){
        cin >> ch;
        count = count + 1;
    }
    cout << count << endl;
    return 0;
}
