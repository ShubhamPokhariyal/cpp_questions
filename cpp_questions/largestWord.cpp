#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n; 
    cin >> n;
    cin.ignore(); 
    char arr[n+1];
    cin.getline(arr,n+1);
    int maxCount = INT_MIN;
    int count = 0;
    int st = 0,maxst = 0;
    for (int i = 0; i < n+1; i++)
    {
        if(arr[i]==' '||arr[i]=='\0'){
            if(maxCount<count){
                maxCount = count;
                maxst = st;
            }
            count = 0;
            st = i+1;
        }
        else{
            //cout << "curr element "<<arr[i]<<endl;
            count++;
        }
    }
    cout << maxCount<<endl;
    for (int i = 0; i < maxCount; i++)
    {
        cout << arr[maxst+i];
    }
    return 0;
}