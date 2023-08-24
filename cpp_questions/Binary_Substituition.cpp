#include<bits/stdc++.h>

using namespace std;

long long int recSolve(string s,int n,int i){
    if(i==n)
        return 1;
    long long int res = 0;
    if(s[i]=='a'){
        res += recSolve(s,n,i+1);
        if(i+1<n && s[i+1]=='b'){
            res += recSolve(s,n,i+2);
        }
    }else{
        res += recSolve(s,n,i+1);
        if(i+1<n && s[i+1]=='a'){
            res += recSolve(s,n,i+2);
        }
    }
    return res;
}

int main(){
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        cout<< recSolve(s,s.size(),0)%998244353<<endl;
    }
    return 0;
}