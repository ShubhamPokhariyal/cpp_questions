#include<iostream>

using namespace std;

bool pow2(int n){
    int t =2;
    int i = 0;
    while(t<=n){
        if(t==n){
            return true;
        }
        else{
            t = t<<1;
        }
    }
    return false;
}

int main(){
    int n;
    cin>> n;
    cout << pow2(n);
}