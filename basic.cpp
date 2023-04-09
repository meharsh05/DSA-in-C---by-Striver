/*To store whole line as an string we use getline*/

#include<bits/stdc++.h> //- To use all libraries of C++
using namespace std; 

int main(){
    string str;
    cout <<"Enter Your Name" << endl;
    getline(cin, str);
    cout <<"My name is " << str;
    
    return 0;
}

/*
E.x 1 - Write a program that takes an input of age 
and print if you are adult or not. 
*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    int age;
    cout << "Enter your age " <<endl;
    cin>>age;

    if(age>=18){
        cout << "Your are adult " << endl;
    }
    else{
        cout << "You are not adult " << endl;
    }
    
    return 0;
}

/*
E.x 2 - A school has following rules for grading system :
    Below 25 - Fail 
    25 - 44 -- E
    45 - 49 -- D
    50 - 59 -- c
    60 - 79 -- B
    80 - 100 -- A 
    Ask user to enter marks and print corresponding grade 
*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    int marks;
    cout << "Enter your marks : ";
    cin>>marks;

if(marks<25){
    cout << "Fail" <<endl;
}
else if(marks <= 44){
    cout << "E" << endl;
}
else if(marks <= 49){
    cout << "D" << endl;
}
else if(marks <= 59){
    cout << "C" << endl;
}
else if(marks <= 79){
    cout << "B" << endl;
}
else if(marks <= 100){
    cout << "A" << endl;
}
    
    return 0;
}