#include <iostream>
using namespace std;

void towerOfHanoi(int n, int start, int end) {
    if (n == 1) {
        cout << start << " -> " << end << endl;  
        return;
    }
    int other = 6 - (start + end);   
    towerOfHanoi(n - 1, start, other);
    cout << start << " -> " << end << endl;
    towerOfHanoi(n - 1, other, end);
}

int main() {
    towerOfHanoi(3, 1, 3);
}
