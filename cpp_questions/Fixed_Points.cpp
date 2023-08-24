#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count=0;
        cin >>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            for(int j=i;j<n;j++){
                for(int k=i;k<=j;k++){
                    if(arr[k]==k-i+1){
                        count++;
                    }
                }
            }
        }
    cout << count<<endl;
    }
}