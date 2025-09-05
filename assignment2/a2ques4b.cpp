// 4) String Related Programs
// (b) Write a program to reverse a string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);

    string reversed = string(str.rbegin(), str.rend());

    cout << "Reversed string: " << reversed << endl;
    return 0;
}
