#include <bits/stdc++.h>
using namespace std;
// EXPLAINATION 
// take two numbers and print its sum 
    int sum( int num1 , int num2){
        int num3 = num1 + num2; // 50 + 50 = 100
        return num3; }


int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    int res = sum(num1 , num2); // 50 + 50 = 100
    cout << res;  // PRINTS  100
    return 0;
}