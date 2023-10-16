#include<iostream>
using namespace std;


long long recGrid(int n,int m){
    if(n == 0 || m == 0) return 0;
    if(n == 1 && m == 1) return 1;
    return recGrid(n-1,m) + recGrid(n,m-1); 
}

int main(){
    int n,m;
    cout << "Enter dimensions"<<endl;
    cin >> n >> m;
    cout << recGrid(n,m);
}