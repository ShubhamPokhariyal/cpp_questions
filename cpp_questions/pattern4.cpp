#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter a no.";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            cout << i;
        }cout << endl;
    }return 0;
}