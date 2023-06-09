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

/*
Pattern 6 -
            1 2 3 4 5
            1 2 3 4
            1 2 3
            1 2 
            1
*/

#include<iostream>
using namespace std; 

void print6(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i+1; j++){
            cout << j << " ";
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
        print6(n);
    }
}

/*
Pattern 7 - 
                   *
                 * * *
               * * * * * 
             * * * * * * *    
            * * * * * * * * *
*/

#include<iostream>
using namespace std; 

void print7(int n){
    for(int i=0; i<n; i++){
        
        //- For space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        
        //- For Stars
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        
        //- For space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
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
        print7(n);
    }
}

/*
Pattern 8 - 
        * * * * * * * * * 
          * * * * * * *
            * * * * *
              * * *
                * 
*/

#include<bits/stdc++.h>
using namespace std; 

void print8(int n){

    //- Used for space
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }

        //- Used for stars
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*";
        }

        //- Used for space
        for(int j=0; j<i; j++){
            cout << " ";
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
       
        print8(n);
    }
}

/*
Pattern 9 - 
                *               
               ***
              *****          
             *******
            *********
            *********
             *******
              *****
               ***
                *
*/

#include<iostream>
using namespace std; 

void printa(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void printb(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*";
        }
        for(int j=0; j<i; j++){
            cout << " ";
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
        printa(n);
        printb(n);
    }
}

/*
Pattern 10 - 
            *
            **
            ***
            ****
            *****
            ****
            ***
            **
            *
*/

#include<iostream>
using namespace std; 

void print10(int n){
    for(int i=1; i<=2*n-1; i++){ //- For outer loop
        int stars = i;
        if(i > n) stars = 2*n-i; 
        for(int j=1; j<=stars; j++){
            cout << "*";
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
        print10(n);
    }
}