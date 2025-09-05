// 3) String Anagrams
// Given two strings str1 and str2, determine if they form an anagram pair.
// Note: Two strings are considered anagrams if one string can be rearranged to form the other
// string.


#include <iostream>
using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.length() != str2.length())
        return false;

    int freq1[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; i < str1.length(); i++) {
        freq1[str1[i] - 'a']++;
        freq2[str2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i])
            return false;
    }

    return true;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2))
        cout << "The strings are Anagrams." << endl;
    else
        cout << "The strings are NOT Anagrams." << endl;

    return 0;
}
