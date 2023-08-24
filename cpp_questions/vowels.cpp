#include <iostream>

using namespace std;

int main(){
    char a;
    cout << "Enter a character"<<endl;
    cin >> a;
    char b =  a & '_';   //bitwise and with '_' gives uppercase char/string even if it is already uppercase
    switch(b){
        case 'A':
            cout << "Its a vowel " <<a << endl;
            break;
        case 'E':
            cout << "Its a vowel " <<a << endl;
            break;
        case 'I':
            cout << "Its a vowel " <<a << endl;
            break;
        case 'O':
            cout << "Its a vowel " <<a << endl;
            break;
        case 'U':
            cout << "Its a vowel " <<a << endl;
            break;
        default:
            cout << "Its a consonant " << a << endl;
    }
    return 0;
}