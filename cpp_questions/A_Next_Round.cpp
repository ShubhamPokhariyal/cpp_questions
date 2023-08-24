#include<iostream>

using namespace std;

int main(){
    int n,k,p=0,km;
    cin >> n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    km = arr[k-1];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=km && arr[i]>0){
            p++;
        }
    }
    cout << p;
}