#include<iostream>

using namespace std;

int linearSearch(int n,int arr[],int k){
    for (int  i = 0; i < k; i++)
    {
        if (n == arr[i])
        {
            return i;
        } 
    }
    return -1;
}

int main(){
    int arr[5] = {1,32,54,53,45};
    int n;
    cin >> n;
    int k = 5;
    int i = linearSearch(n,arr,k);
    if(i == -1){
        cout << "Value not found"<<endl;
    }
    else{
        cout << "Value found at "<<i<<endl;
    }
    return 0;
}