#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int st,en,i = 0;
    int maxSum = INT_MIN;
    while(i<n){
        int k = n;
        while(k>0){
            int sum = 0;
            for(int j = k-1;j>i;j--){
                sum += arr[j];
            }
            maxSum = max(maxSum,sum);
            k--;
        }
        i++;
    }
    maxSum == INT_MIN? cout<<"-1":cout<<maxSum<<endl;
    return 0;
}