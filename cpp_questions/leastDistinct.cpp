#include<iostream>
#include<algorithm>

using namespace std;

int mindistinct(int arr[],int k,int n){
    sort(*arr,(*arr+n));
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    
    int count[10000];
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;     
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int k; 
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << mindistinct(arr,k,n)<<endl;
    return 0;
}