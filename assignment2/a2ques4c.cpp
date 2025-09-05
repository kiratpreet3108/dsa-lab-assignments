// 4) String Related Programs
// (c) Write a program to delete all the vowels from the string.


#include <iostream>
using namespace std;

bool isVowel(char ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; 
    }
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[100], result[100];
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j] = str[i];   
            j++;
        }
    }

    result[j] = '\0';   

    cout << "String after deleting vowels: " << result << endl;

    return 0;
}
