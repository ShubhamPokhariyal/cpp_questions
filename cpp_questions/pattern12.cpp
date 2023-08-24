#include<iostream>
using namespace std;

int main(){
    int n,budget;
    cin >> n;
    cin >> budget;
    int cost[n];
    for(int i=0;i<n;i++){
        cin >> cost[i];
    }
    //main logic
    int cost1,cost2,diff=INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(abs(cost[i]+cost[j]-budget)<diff){
                diff = abs(cost[i]+cost[j]-budget);
                cost1 = cost[i];
                cost2 = cost[j];
            }
        }
        
    }cout << cost1 <<endl<<cost2;
    return 0;
}