#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,t;
    string s;
    cin >> n>>t;
    cin >>s;
    while(t--){
        for (int i = 1; i < n; i++)
        {
            if(s[i]=='G' && s[i-1]=='B'){
                s[i-1]='G';
                s[i]='B';
                i++;
            }
        }
    }
    cout << s<<endl;
    return 0;
}