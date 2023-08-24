#include<iostream>

using namespace std;

int main(){
    int t,len,maxLen;
    cin >>t;
    int con = 1;
    while(con<=t){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int i = 1;
        maxLen = 2;
        int diff = arr[0]-arr[1];
        len = 2;
        while(i<n-1){
            if((arr[i]-arr[i+1])==diff){
                len+=1;
                if(maxLen<len){
                    maxLen = len;
                }
            }
            else{
                diff = arr[i]-arr[i+1];
                len = 2;
            }  
            i++;
        }
        cout << "Case #"<<(con)<<": "<<maxLen<<endl;
        con++;
    }
    return 0;
}