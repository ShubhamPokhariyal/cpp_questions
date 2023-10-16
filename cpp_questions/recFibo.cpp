#include<iostream>

using namespace std;

int recFibo(int n){
    if(n<=2){
        return 1;
    }
    return recFibo(n-1) + recFibo(n-2);
}

int main(){
    cout << "Enter the term"<<endl;
    int n;
    cin >> n;
    cout << recFibo(n);
}