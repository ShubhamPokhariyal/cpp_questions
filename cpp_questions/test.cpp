#include <iostream>
#include<string>

using namespace std;

int main()
{
    string a = "123";
    const char* j = &(a[0]);
    int n = atoi(j);
    cout << n;
    return 0;
}