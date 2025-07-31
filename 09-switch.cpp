#include <bits/stdc++.h>
using namespace std;
int main(){
    //switch statement = alternative to many else if statements
/* q1 - take day no. and print the corresponding day 
    for 1 print monday
    for 2 print tuesday and so on ... */
int day;
cin >> day ;
switch (day) {
    case 1: cout << "monday";
    break; // break is used to break the switch statement.
    case 2: cout << "tuesday";
    break;
    case 3: cout << "wednesday";
    break;
    case 4: cout << "thursday";
    break;
    case 5: cout << "friday";
    break;
    case 6: cout << "saturday";
    break;
    case 7: cout << "sunday";
    break;
    // default is used to print if the input is not in the switch case
    default: cout << "invalid day";
    break;
}

    return 0; 
}