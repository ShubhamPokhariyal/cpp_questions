#include<iostream>

using namespace std;


int main(){
    int m,n;
    cin >> m >>n;
    int arr[m][n];
    int a,b;
    cin >> a>>b;
    if(a!=n){
        cout<<"Cannot multiply given matrices"<<endl;
        return 0;
    }
    int arr2[a][b];
    int t= 2;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>arr2[i][j];
        }
    }
    int mul[m][b];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
            sum += arr[i][k]*arr2[k][j];
            }
            mul[i][j] = sum;
        }
    }
    cout<<"Product of given matrix is: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << mul[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;   
}