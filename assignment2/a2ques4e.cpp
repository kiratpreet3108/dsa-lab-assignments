// 4) String Related Programs
// (e) Write a program to convert a character from uppercase to lowercase.

#include <iostream>
using namespace std;

int main() {
    string ch;
    cout << "Enter an uppercase character: ";
    getline(cin, ch);
    
    for (int i = 0; i < ch.length(); i++) {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            ch[i] = ch[i] + 32; // Convert to lowercase
        }
    }
    string lower = ch;

    cout << "Lowercase character: " << lower << endl;
    return 0;
}
