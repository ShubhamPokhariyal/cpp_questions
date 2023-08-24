#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int k[t];
    for(int i=0;i<t;i++){
        cin>>k[i];
    }
    for(int i=0;i<t;i++){
        for(int j=k[i]+1;j<=1e6;j++){
            string num=to_string(j);
            bool check=true;
            for(int point=0;point<num.length();point++){
                if(num[point]!=num[(num.length()-1)-point]){
                    check=false;
                    break;
                }
            }
            if(check){
                cout<<j<<endl;
                break;
            }
        }
    }
    return 0;
}