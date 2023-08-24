#include <iostream>

using namespace std;

int main(){
    int space = 1;
    int n;
    cout << "Enter a  number";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++ ){
            cout << "  ";
        }
        cout << "*";
        if(i != 1){
            for(int k = 1; k <= space; k++){
                cout << "  ";
            }
            space += 2;
            cout << "*";
        }
        cout << endl;
    }
    space -= 2;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n-i; j++ ){
            cout << "  ";
        }
        cout << "*";
        if(i != 1){
            for(int k = 1; k <= space; k++){
                cout << "  ";
            }
            space -= 2;
            cout << "*";
        }
        cout << endl;
    }return 0;
}