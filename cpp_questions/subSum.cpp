#include <iostream>

using namespace std;

int main(){
    int n;
    int gsum;
    cin >> gsum;
    cin >> n;
    int arr[n];
    int flag = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = i; j < n; j++){
            sum += arr[j];
            if(sum > gsum){
                break;
            }else if(sum == gsum){
                cout  << i+1<<" "<<j+1<<endl;
                flag = 1;
                break;
                
            }
        }if(flag == 1){
            break;
        }
    }
    return 0;
}