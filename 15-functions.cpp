#include <bits/stdc++.h>
using namespace std;
  // function - block of code to perform a specific task for you 
    //function - used to modularize code  
    // function - incrase readablity of code 
    // funtion are used to use same code multiple times
    // we commly use 4 types of function 
    // void - doesnt reutrns anything 
    // return type - returns something 
    // parameterized - takes parameters 
    // parameterized and return - takes parameters and returns something
  
    void printname (string name){
        cout << "hey ," << name << endl;
    }
int main(){
    string name;
    string name2;
    string name3;
    
 cin >> name;     // input name from user 
 printname(name); // function call , reusing code 
  cin >> name2;  
 printname(name2); // function call , reusing code
 cin >> name3; 
 printname(name3); // function call , reusing code
    return 0;
}   