#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = arr[0];
    for (int i = 1; i < n; i++){
        if(mx<arr[i]){
            mx = arr[i];
        }
        else{
            arr[i] = mx;
        }
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}