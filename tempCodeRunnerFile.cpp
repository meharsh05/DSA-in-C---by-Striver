#include<iostream>
using namespace std; 

int main(){
    string name = "Harsh";
    int len = name.size();

    name[len -1] = 's';
    cout << name[len - 1];

    cout << name;

    return 0;
}