#include<bits/stdc++.h>
using namespace std; 

int main(){
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

if(age < 18){
    cout << "Not eligible for job" << endl;
}
else if(age <= 54){
    cout << "Eligible for job" << endl;
}
else if(age <= 57){
    cout << "Eligible for job but retirement soon" << endl;
}
else{
    cout << "Retirement Soon" << endl;
}
    
    return 0;
}