#include<bits/stdc++.h>

using namespace std;

int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}


int main(){
    int n,r;
    cin >> n >> r;
    cout << fact(n)/(fact(r)*fact(n-r));
}