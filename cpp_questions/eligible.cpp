#include <iostream>

using namespace std;

void elig(int a){
    if(a<18){
        cout << "You can't vote";
    }
    else{
        cout << "You can vote";
    }
    return;
}

int main(){
    int age;
    cout <<"enter your age"<<endl;
    cin>>age;
    elig(age);
    return 0;
}