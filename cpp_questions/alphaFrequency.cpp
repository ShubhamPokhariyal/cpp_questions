#include<iostream>
#include<string>

using namespace std;

int main(){
    string n;
    getline(cin,n);
    int arr[26];
    int maxCount = 0;
    int index = 0;
    for (int i = 0; i < 26; i++)
    {
        arr[i]  = 0;
    }
    for (int i = 0; i < n.length(); i++)
    {   
        arr[n[i]-97] += 1;
        if(arr[n[i]-97]>maxCount){
            index = n[i]-97;
            maxCount = arr[n[i]-97];
        }
    }
    cout << char(index + 97)<<endl;
    return 0;
}