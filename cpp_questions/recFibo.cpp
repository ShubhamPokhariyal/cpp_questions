#include<iostream>

using namespace std;

void recFibo(int n,int a,int b){
    if(n>0){
        recFibo(n-1,b,a+b);
        cout << a<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    recFibo(n,0,1);
    return 0;
}