#include <iostream>

using namespace std;

int main(){
    int r;
    cout << "Enter a no." << endl;
    cin >> r;
    for(int i = r; i >= 1; i--){
        for(int k = 1; k <= (r-i); k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }cout << endl;        
    }return 0;
}