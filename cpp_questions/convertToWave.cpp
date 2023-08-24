#include<iostream>

using namespace std;

int main(){
    int n;cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int id = 0;
    int wave[n];
    for (int i = 1; i < n; i+=2)
    {
        wave[id] = arr[i];
        id++;
        wave[id] = arr[i-1];
        id++;
    }
    if(n%2!=0){
        wave[n-1] = arr[n-1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << wave[i]<<" ";
    }
    cout <<endl;
    return 0;
}