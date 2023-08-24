#include<iostream>
#include<string>

using namespace std;

int main(){
    int t,len;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        if(s.size()>10){
            len = s.size()-2;
            cout << s[0]<<len<<s[len+1]<<endl;
        }
        else
            cout << s<<endl;
    }
    return 0;
}