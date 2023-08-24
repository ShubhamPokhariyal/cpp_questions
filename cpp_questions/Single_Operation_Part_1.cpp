#include<iostream>
#include<cmath>

using namespace std;

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
 
    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,st,max,y,c;
        string s;
        cin >> n;
        cin >> s;
        st = binaryToDecimal(s);
        max = st;
        for (int i = 1; i <= n; i++)
        {
            c = floor(st/pow(2,i));
            //cout << "n = "<<s<<"\ncurrent max: "<<max<<"\n xor: "<<(st^c) <<"\n y:"<<i<<endl;
            if(max <=(st^c)){
                max = st^c;
                y = i;
            }   
        }
        cout << y<<endl;
        
    }
}