#include<iostream>

using namespace std;

int main(){
    int key;
    cin >>key;
    int m,n;
    cin >>m>>n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int i = 0,j = 0;
    int flag = false;
    // while(flag&&i<m&&j<n)
    // {
    //     if(arr[i][n-1]<key){
    //         i++;
    //         continue;                                             //First 
    //     }                                                         //method
    //     while(j<n)
    //     {
    //         if(arr[i][j]==key){
    //             flag = false;
    //             break;
    //         }
    //         j++;
    //     }
    //     i++;
    // }
    // flag == false? cout<<"found "<<--i<<" "<<j<<endl:cout<<"not found";
    
    
    
    // while(i<m&&j<n){
    //     if(arr[i][j]==key){
    //         flag = true;
    //         break;
    //     }
    //     if(arr[i][n-1]<key||(j==n-1)){                   //Second
    //         i++;                                         //method
    //         j = 0;
    //     }
    //     else{
    //         j++;
    //     }
    // }
    j = n-1;
    while(i<m&&j>=0){
        if(arr[i][j]==key){
            flag = true;
            break;
        }
        if(arr[i][j]<key){
            i++;
        }
        else{
            j++;
        }
    }
    cout << flag;
    return 0;
}