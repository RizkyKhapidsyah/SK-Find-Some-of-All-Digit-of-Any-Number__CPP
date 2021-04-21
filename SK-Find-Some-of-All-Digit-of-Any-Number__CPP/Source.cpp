#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    long int no, sum;
    no = sum = 0;

    cout << "\n Enter 9 digit no : ";
    cin >> no;

    while (no != 0) {
        sum += no % 10;
        no = no / 10;
    }

    int i;

    for (i = 8; i > 1; i--) {
        if (i == (sum - i) % 10) {
            cout << "\n Account Number is not Okay.";  break;

        } else {
            cout << "\n Account Number is Okay.";
            break;
        }
    }

    _getch();
    return 0;
}