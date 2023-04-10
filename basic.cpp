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
IF ELSE STATEMENT Prblm 
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

/*
IF ELSE STATEMENT Prblm 
Ex. 3 - Take the age from user and then decide accordingly:
1. If age < 18 -- print "Not eligible for job"
2. If age >= 18 -- print "Eligible for job"
3. If age >= 55 and age <= 57 -- print "Eligible for job but retirement soon"
4. If age > 57 -- print "Retirement time"
*/

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
    cout << "Retirement Time" << endl;
}
    
    return 0;
}

/*
SWITCH STATEMENT 
Ex. 4 - Take the day number and print the corresponding day
for 1 print "Monday", for 2 print "Tuesday" and so on
for 7 print "Sunday". 
*/
#include<bits/stdc++.h>
using namespace std; 

int main(){
    int day;
    cout << "Enter the day no. : ";
    cin >> day; 

switch(day){
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Invalid" << endl;

}
    return 0;
}