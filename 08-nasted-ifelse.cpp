#include <bits/stdc++.h>
using namespace std;
int main()/*
take the age form user and ask acordingly 
1. if age <18 
- print not eligible for job 
2.if age >=18 
- print eligible for job
3. if age >=55 and <=57
- print eligible for job but retirement soon hehe
4. if age >=58
- you are too old for job rest at home
*/
{
int age;
cin >> age;
// not eligible for job
if (age <=18 ) {
    cout << " you are not eligible for job";
}

// eligible for job
else if (age <= 57 ){
    cout <<"yes you are eligible for job";
// retirement soon / nasted if else mean condition inside condition
            if ( age >=55){
                cout <<" but retirement soon hehe";
            }
}

// too old
else if ( age > 58){
    cout <<"you are too old for job rest at home";
}

// invalid age
else {
    cout <<"invalid age";
}
    return 0;
}
