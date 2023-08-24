#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 1; i <= n; i++){
    //     int d = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         if(arr[j]<arr[j-1]){
    //             int d = arr[j];
    //             int s =0;
    //             for(int l = 0;l < j;l++){
    //                 if(arr[l]>d){
    //                     int s = l;
    //                     for(int k = j;k>s;k--){
    //                         arr[k]=arr[k-1];
    //                     }
    //                     arr[s] = d;
    //                     break;
    //                 }
    //             }
    //             break;
    //         }

    //     }
    // }
    for (int i = 1; i < n-1; i++)
    {
        int j = i-1;
        while(arr[j]>arr[i]){
            
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    return 0;    
}