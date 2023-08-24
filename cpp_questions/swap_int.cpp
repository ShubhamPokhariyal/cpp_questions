#include <iostream>

using namespace std;

void swap(int a,int b){
    int c = a;
    a = b;
    b = c;
    cout << "a is now "<<a<<"\nb is now "<<b<<endl;
    return; 
}

int main(){
    int a,b;
    cout << "Enter a and b"<<endl;
    cin>>a>>b;
    swap(a,b);
}