#include<iostream>

using namespace std;

int DtoO(int n){
    int lst = 0;
    if(n<8){
        return n;
    }
    lst = n%8 + (10*DtoO(n/8));
    return lst;
}

int main(){
    int n;
    cout << "Enter a decimal"<<endl;
    cin >> n;
    cout << DtoO(n)<<endl;
}