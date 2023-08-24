#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 3 Sides";
    cin >> a >> b >> c;
    if(a == b && b == c){
        cout << "Equilateral";
    }else if(a == b || b == c || a == c){
        cout << "Isoceles";
    }else{
        cout << "Scalene";
    }return 0;

}