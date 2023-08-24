#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int j = n;
    int t = 1;
    int r = 0;
    while(t == 1){
        if(n/10 == 0){
            r = r*10 + n;
            t = 0;
        }
        else{
            r = r*10 + n%10;
            n = n/10;
        }
    }
    //checking palindrome
    if(r == j){
        cout << "given number is a palindrome";
    }
    else{
        cout << j <<" is not a palindrome. Got " << r << endl;;
    }
    return 0;
}