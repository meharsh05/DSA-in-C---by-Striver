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