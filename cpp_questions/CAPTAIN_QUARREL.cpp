#include<iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    int rem = a/2;
    if(rem%2==0)
        cout << "PARTY";
    else    
        cout << "WAR";
}