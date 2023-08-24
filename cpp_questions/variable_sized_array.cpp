#include<iostream>

using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int* arr[n];
    for (int  i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        int arr1[k+1];
        arr1[0] = k;
        for (int  j = 1; j <= k; j++)
        {
            cin >> arr1[j];
        }
        arr[i] = arr1;
    }
    for (int i = 0; i < q; i++){
        int m,n;
        cin>>m>>n;
        int *p = arr[m];
        cout << *(p+n+1)<<endl;
    }
    return 0;
}