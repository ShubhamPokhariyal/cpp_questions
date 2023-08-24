#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int i = 0;
    while(i<n){
        int k = n;
        while(k>0){
            for (int j = k-1; j >=i; j--)
            {
            sum += arr[j];  
            }
            k--;
        }
        i++;
    }
    cout << sum;
    return 0;
}