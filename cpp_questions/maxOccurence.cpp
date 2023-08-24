#include<iostream>
#include<string>
#include<climits>

using namespace std;

int maxoccourence(int arr[], int n, int k)
    {
        int maxo = 0;
        int num = INT_MAX;
        string ks = to_string(k);
        char kc = ks[0];
        for(int i=0;i<n;i++){
            int curro = 0;
            string curr = to_string(arr[i]);
            for(int j =0;j<curr.length();j++){
                char current_string = curr[j];
                if(kc==curr[j]){
                    curro++;
                }
            }
            if(curro>maxo){
                maxo = curro;
                num = arr[i];
            }
            else if(curro == maxo){
                num = min(arr[i],num);
            }
        }
        if(maxo!=0){
            return num;
        }
        else{
            return -1;
        }
    }
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << maxoccourence(arr,n,k);
    return 0;
}