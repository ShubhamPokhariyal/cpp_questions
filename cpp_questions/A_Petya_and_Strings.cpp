#include<iostream>

using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >>s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i]<97)
            s1[i]+=32;
        if(s2[i]<97)
            s2[i]+=32;
    }if(s1<s2){
        cout << "-1";
    }else if(s1>s2){
        cout << "1";
    }else{
        cout << "0";
    }
    return 0;   
}