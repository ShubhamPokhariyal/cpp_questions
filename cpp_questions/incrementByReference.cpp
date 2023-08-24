#include<iostream>

using namespace std;

void incre(int* a){
    *a++;
}

int main(){
    int a = 0;
    incre(&a);
    cout << a<<endl;
}