//Program for converting decimal to hexadecimal
#include<iostream>
#include<string>

using namespace std;

string DtoH(int n){
    string ans = "";
    if(n<16){
        if(n<10){
            ans = to_string(n);
            return ans;
        }
        else{
            ans = (char)(n+55);
            return ans;
        }  
    }
    else{
        if(n%16<10){
            ans = to_string(n%16) + (DtoH(n/16));
        }
        else{
            ans = (char)(n%16+55) + (DtoH(n/16));
        }
        return ans;
    }
}

int main(){
    int n;
    cout << "Enter a number"<<endl;
    cin >> n;
    string a = DtoH(n);
    int len = a.size();
    for(int i = len-1; i>=0;i--){
        cout << a[i];
    }
}