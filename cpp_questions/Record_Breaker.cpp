#include<iostream>
using namespace std;
int main(){
    int t;
    int con =1;
    cin >>t;
    while(con <=t ){
        int n;
        if(n==1){
            cout <<"Case #"<<con<<": "<<0<<endl;
            con++;
            continue;
        }
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }int day = 0,record = 0,i = 1;
        if(a[0]>a[1]){
            record = a[0];
            day++;
        }if(a[n-1]>a[n-2]){
            if(a[n-1]>record){
                record = a[n-1];
                day++;
            }
        }while(i<n-1){
            int curr = a[i];
            if(curr>record){
                if(curr>a[i+1]){
                    record = a[i];
                    day++;
                }
            }i++;
        }cout <<"Case #"<<con<<": "<<day<<endl;
        con++;
    }return 0;
}