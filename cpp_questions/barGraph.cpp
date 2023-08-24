#include<iostream>

using namespace std;

int main(){
    int n,max=0,temp;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp>max)
            max = temp;
        a[i] = temp;
    temp = max;
    }for(int j=1;j<=temp;j++){
        for(int i=0;i<n;i++){
            if(a[i]>=max)
                cout << "* ";
            else    
                cout<<"  ";
        }   
        max--;
        cout << endl;
    }
}