#include <iostream>

using namespace std;

void fibo(int n){
    if (n == 0){
        return;
    }
    int t1,t2,t3;
    t1 = 0;
    t2 = 1;
    cout << t1<<endl;
    for(int i = 2;i<=n;i++){
        cout << t2<<endl;
        t3 = t2 + t1;
        t1 = t2;
        t2 = t3;
    }
    return;
}

int main(){
    int n;
    cout << "Enter the number of terms"<<endl;
    cin >> n;
    fibo(n);
    return 0;
}