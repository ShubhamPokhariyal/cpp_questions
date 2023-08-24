#include<iostream>
#include<string>
using namespace std;

bool checkD(string s){
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='D')
            return true;
    }
    return false;
    
}

int main(){
    int t,n,d,c,m;
    int counter = 1,i;
    string s,r;
    cin >> t;
    while(t--){
        i=0;
        r="";
        cin>>n>>d>>c>>m;
        cin>>s;
        while(i<n && d>0 && (c>0||(m>0&&s[i]=='D'))){
            if(s[i]=='D'){
                d--;
                c += m;
            }
            else{
                c--;
            }
            i++;
        }
        for (int j = i; j < n; j++)
        {
            r += s[j];
        }
        if(checkD(r))
            cout << "Case #"<< counter<<": NO"<<endl;
        else    
            cout << "Case #"<< counter<<": YES"<<endl;
        counter++;
    }
}