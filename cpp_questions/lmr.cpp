#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> turn_away_members(vector<int> scores, int m) {
    int n = scores.size();
    if (m >= n) {
        return {}; // no members need to be turned away
    }

    // Calculate the prefix maximum scores
    vector<int> prefix_max(n, 0);
    prefix_max[0] = scores[0];
    for (int i = 1; i < n; i++) {
        prefix_max[i] = max(prefix_max[i-1], scores[i]);
    }

    // Calculate the list of members to be turned away
    vector<int> turn_away;
    int count = 0;
    for (int i = n-1; i >= 0; i--) {
        if (scores[i] >= prefix_max[i] && count < m) {
            turn_away.push_back(scores[i]);
            count++;
        } else {
            break;
        }
    }

    reverse(turn_away.begin(), turn_away.end()); // reverse the order of the elements
    return turn_away;
}

int main() {
    // Example usage
    vector<int> scores;
     int m,n,temp;
    cin >> n;
    cin >> m;   
    for(int i=0;i<n;i++){
        cin>>temp;
        scores.push_back(temp);
          }
    vector<int> turn_away = turn_away_members(scores, m);
    if (turn_away.empty()) {
        cout << "No members need to be turned away." << endl;
    } else {
        cout << "Turn away members: ";
        for (int i = 0; i < turn_away.size(); i++) {
            cout << turn_away[i] << " ";
        }
        cout << endl; // Output: 10 20
    }
    return 0;
}