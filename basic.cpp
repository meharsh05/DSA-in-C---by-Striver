/*To store whole line as an string we use getline*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    string str;
    cout <<"Enter Your Name" << endl;
    getline(cin, str);
    cout <<"My name is " << str;
    
    return 0;
}