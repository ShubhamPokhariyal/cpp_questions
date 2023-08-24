#include <iostream>

using namespace std;

void eve_odd(int n){
    n%2==0?cout << "even":cout<<"odd";
    return;
}

int main(){
    int n;
    cout << "Enter a number"<<endl;
    cin>>n;
    eve_odd(n);
    return 0;
}