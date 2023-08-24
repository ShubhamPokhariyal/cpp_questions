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
    int n;
    cout << "Enter a number"<<endl;
    cin >> n;
    int f = fact(n);
    cout <<f<<endl;
    return 0;
}