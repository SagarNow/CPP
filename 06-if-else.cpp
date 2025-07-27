#include<bits/stdc++.h>
using namespace std;
int main(){
    // write a program to take a input of age and print if the person is 18+ or not
    // >=18  = you are eligible 
    // <18  = you are not eligible
    int age ;
    cin>>age;
    if (age >=18){
        cout << "you are eligible";
    }
    else {
        cout << "you are not eligible";
    }

    return 0;
}