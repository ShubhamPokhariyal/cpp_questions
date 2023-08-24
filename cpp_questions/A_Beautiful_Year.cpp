#include<iostream>
#include<string>

using namespace std;

bool notIn(string s,string c){
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i]<<c[0]<<endl;
        if(s[i]==c[0]){
            return false;
        }
    }
    return true;
}

int main(){
    string r="";
    string ldc;
    int n,t,ld,res;
    cin >> n;
    for (int i = n+1; i <= 9012; i++)
    {   
        t=0;
        res = i;
        cout <<"looping"<<endl;
        while(i>0){
            ld = i%10;
            ldc = to_string(ld);
            i/=10;
            if(notIn(r,ldc))
                r+= ldc;
            else{
                t=1;
                break;
            }
        }
    }
    if(t==0)
        cout << r;
}