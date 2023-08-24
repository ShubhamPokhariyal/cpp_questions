#include <iostream>

using namespace std;

int fact(int n){
    int f = 1;
    for(int i = 1;i <= n;i++){
        f *= i;
    }
    return f;
}

int main(){
    int n,r;
    cout << "Enter two numbers"<<endl;
    cin >> n>>r;
    int c = fact(n)/(fact(n-r)*fact(r));
    cout << c;
    return 0;
}