#include<iostream>

using namespace std;

int main(){
    int t,x,y,count;
    cin>>t;
    while(t--){
        cin >>x>>y;
        if(x<y){
            cout<<(y-x)<<endl;
        }else if(y<x){
            count = (x-y)/2;
            y = count*2+y;
            if(y-x!=0){
                cout << count+2<<endl;
            }
            else{
                cout << count<<endl;
            }
        }else{
            cout<<"0"<<endl;
        }
    }
}