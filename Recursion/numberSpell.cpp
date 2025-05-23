#include <iostream>
using namespace std;

void numberSpell(int n) {
    if(n <= 0) {
        return;
    }
    numberSpell(n/10);
    int digit = n % 10;
    switch(digit) {
        case 0: cout << "zero" << " "; break;
        case 1: cout << "one" << " "; break;
        case 2: cout << "two" << " "; break;
        case 3: cout << "three" << " "; break;
        case 4: cout << "four" << " "; break;
        case 5: cout << "five" << " "; break;
        case 6: cout << "six" << " "; break;
        case 7: cout << "seven" << " "; break;
        case 8: cout << "eight" << " "; break;    
        case 9: cout << "nine" << " "; break;
    }
}

int main() {
    int n;
    cin >> n;

    if(n == 0) {
        cout << "zero" << endl;
    } else {
        numberSpell(n);
        cout << endl; 
    }

    return 0;
}
