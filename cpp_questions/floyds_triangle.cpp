#include <iostream>

using namespace std;

int main(){
    int f = 1;
    int n;
    cout << "enter a no.";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << f++ <<" ";
        }cout << endl;
    }return 0;
}