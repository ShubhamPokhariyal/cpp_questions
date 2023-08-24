#include<iostream>
 
using namespace std;

int main(){
    int a,b,c;
    cin >> a>>b>>c;
    if(a>b && a>c)
        cout << "Naruto"<<endl;
    else if(b>c && b>a)
        cout << "Sasuke"<<endl;
    else    
        cout << "Sakura"<<endl;
}