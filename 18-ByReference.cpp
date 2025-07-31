#include <bits/stdc++.h>
using namespace std;
// pass by reference = original value is passed to the function 
// when you add & it means pass by reference it will take address of the value
void dosomething (int &num){
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;
}
int main ()
{
    int num = 10;
    dosomething(num);
    cout << num << endl;
    return 0;
}   