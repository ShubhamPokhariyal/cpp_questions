#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin >> n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int flag = -1;
    int j = n-1;
    while(i!=j){
        if(arr[i]+arr[j]==k){
            flag = 1;
            break;
        }
        else if(arr[i]+arr[j]>k){
            j--;
        }
        else{
            i++;
        }
    }
    cout << flag<<endl;
    return 0;
}