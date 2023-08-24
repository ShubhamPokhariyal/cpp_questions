#include<iostream>
#include<climits>

using namespace std;

int kadene(int arr[],int n){
    int maxsum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if(currSum<0){
            currSum = 0;
        }
        maxsum = max(maxsum,currSum);
    }
    return maxsum;    
}

int main(){
    int n;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapsum;
    int totalsum = 0;
    int nonwrapsum = kadene(arr,n); 
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadene(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}