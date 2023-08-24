#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,counter=1;
        cin >>a>>b;
        if(a+2==b)
            cout <<"no"<<endl;
        else{
            a+=2;
            if((b-a)%3==0){
                cout<<"no"<<endl;
            }else   
                cout <<"yes"<<endl;
        }
    }
}