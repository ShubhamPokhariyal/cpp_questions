#include <iostream>

using namespace std;

void isAlpha(char c){
    int flag = 0;
    char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i = 0;i<26;i++){
        if(arr[i]==c){
            cout <<"It's an alphabet"<<endl;
            flag = 1;
            return;
        }
    }
    if(flag == 0){
        cout << "It's not an alphabet";
    }
    return;
}

int main(){
    char a;
    cout <<"Enter a character";
    cin>>a;
    isAlpha(a);
    return 0;
}