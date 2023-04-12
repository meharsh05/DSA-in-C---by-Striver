/*
Pattern 1 -
            * * * *
            * * * *
            * * * *
            * * * *
*/

#include<bits/stdc++.h>
using namespace std; 

void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << " * ";
        }
        cout << endl;
    }
}
int main(){
    int t;  //- Taking input for test cases 
    cout << "Enter the value for test case to be run: ";
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print1(n);
    }
}

/*
Pattern 2 -  
             *
             * *
             * * *
             * * * *
             * * * * *
*/

#include<iostream>
using namespace std; 

void print2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << " * ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cout << "Enter the value for test case to be run: ";
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print2(n);
    }
}

/*
Pattern 3 - 
            1
            1 2
            1 2 3
            1 2 3 4
            1 2 3 4 5
*/
#include<iostream>
using namespace std; 

void print3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}
int main(){
    int t;
    cout << "Enter the value for test cases:";
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print3(n);
    }
    
}

/*
Pattern 4 - 
            1
            2 2
            3 3 3
            4 4 4 4 
            5 5 5 5 5
*/

#include<iostream>
using namespace std; 

void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}
int main(){
    int t;
    cout << "Enter the value for test cases: ";
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print4(n);
    }
}

/*
Pattern 5-  
            * * * * *
            * * * * 
            * * * 
            * * 
            * 
*/

#include<bits/stdc++.h>
using namespace std; 

void print5(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cout << "Enter the value for test cases: ";
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print5(n);
    }
}