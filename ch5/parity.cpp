#include <iostream>

using namespace std;

bool parity(unsigned long n) {
    bool result = 0;
    while (n) {
        result ^= 1;
        n &= (n-1);
    }
    return result;
}

int main() {
    cout << parity(11) << endl;
}
