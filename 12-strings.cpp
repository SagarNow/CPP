#include <bits/stdc++.h>
using namespace std;
int main(){
    // string - collection of characters "" , character is denoted by ''
    string s = "Sagar";
    int len = s.length();
    cout << "length of string is: " << len << "\n";
    // s[len-1] = 'Z'; // change the last character 
    cout << s[len-1] << "\n";
    
    cout << s[0]; // access the first character
    cout << s[1]; // access the second character
    cout << s[2]; // access the third character
    cout << s[3]; // access the fourth character
    cout << s[4];  // access the fifth character

    return 0;
}