#include<bits/stdc++.h>
using namespace std;
int main(){
/*
write a program to take a input of marks and print if the person is pass or fail

bellow 23 = f
23-45 = p
45-60 = c
60-75 = b
75-90 = a
90-100 = a+
ask marks from user and print the grade
*/
  int marks ;
  cin >> marks;
    if (marks<=23 ){
    cout <<"you are fail"; }
      else if (marks <=45 ){
      cout << "you are pass";
      }
        else if (marks <=60 )
        cout << "you are pass with C grade";
          else if (marks <=75 )
          cout<< "you are pass with B grade";
            else if (marks <=90){
            cout << "you are passs with grade A";
            }
              else if (marks <=100){
              cout << "you are passs with grade A+";
              }
                else if (marks > 100){
                cout <<" invalid marks";
              }
      return 0;
  }
