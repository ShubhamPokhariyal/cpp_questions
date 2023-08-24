#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    string r ="";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='-'){
            if(s[i+1]=='.')
                r += '1';
            else    
                r += '2';
            i++;
        }
        else{
            r+= '0';
        }
    }
    cout << r;
    return 0;
}