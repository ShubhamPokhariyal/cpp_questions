#include <iostream>

using  namespace std;

int sumn(int n){
    int sum = (n*(n+1))/2;
    return sum;
}

int main(){
    int n;
    cout <<"Enter a number";
    cin >> n;
    int sum = sumn(n);
    cout <<sum<<endl;
    return 0;
}
