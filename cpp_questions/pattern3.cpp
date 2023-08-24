#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter A Number";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n-i; k++){
            cout << "  ";
        }for(int j = i; j >= 1; j--){
            cout << "* "; 
        }cout << endl;
    }
}
