#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    for(int i = 1;i<=sqrt(n);i++){
        if (n%i == 0){
            cout << i << endl;
            if(n/i > sqrt(n)){
                cout << n/i <<endl;
            }
        }
    }
    return 0;
}