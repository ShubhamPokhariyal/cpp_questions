#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    int sum = 0;
    cout << "enter a number";
    cin >> n;
    int j = n;
    while(n > 0){
        sum = sum + pow(n%10,3);
        n = n/10;
    }
    if(sum == j){
        cout << "Given number is a armstrong number";
    }
    else{
        cout << "given number is not a armstrong number";
    }
    return 0;
}