#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int sumTrace(vector<vector<int>> arr,int l,int i,int j){
    int sum = 0;
    for(int c=0;c<l;c++){
        int t = arr[i][j];
        cout << t;
        sum += t;
        i++;
        j++;
    }
    return sum;
}


int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<vector<int> >arr[n];
	    int max_sum = INT_MIN;
	    for(int i = 0;i<n;i++){
	        for(int j = 0;j<n;j++){
                int t;
	            cin >> t;
                arr[i][j].push_back(t);
	        }
	    }
	    for(int l = 1;l<=n;l++){
	        max_sum = max(max_sum,sumTrace(arr,l,0,n-l));
	    }
	    for(int l = n-1;l>=1;l--){
	        max_sum = max(max_sum,sumTrace(arr,l,n-l,0));
	    }
	    cout << max_sum<<endl;
	}
	return 0;
}
