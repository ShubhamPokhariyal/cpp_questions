#include<iostream>

using namespace std;

int binSearch(int arr[],int s,int n,int k){
    while(s<=n){
        int mid = (s+n)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid]<k){
            s = mid+1;
        }
        else{
            n = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >>arr[i];
    }
    int key;
    cin>>key;
    int i = binSearch(arr,0,n,key);
    cout << i <<endl;
    return 0;
}