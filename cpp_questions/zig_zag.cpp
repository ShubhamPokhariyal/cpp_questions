#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter a number";
    cin >> n;
    cout << "  ";
    for(int i = 3;i <= n; i += 4){
        cout << "*   ";
    }
    cout << endl;
    cout << " ";
    for(int j = 2; j <= n; j += 2){
        cout << "* ";
    }
    cout << endl;
    for(int k = 1; k <= n; k+=4){
        cout << "*   ";
    }
    cout << endl;
    return 0;
}