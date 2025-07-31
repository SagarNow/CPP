#include <bits/stdc++.h>
using namespace std;
// pass by value = copy of the value is passed to the function 
     void dosomething (int num){
        cout << num << endl;
        num +=5;
        cout << num << endl;
        num +=5;
        cout << num << endl;
     }

int main ()
{
    int num = 10; // the original value is not go to the function a copy of the value is go ⬆️
    dosomething(num); // 10 15 20
    cout << num << endl;// 10 bcz it passed copy of the value
    return 0;
}