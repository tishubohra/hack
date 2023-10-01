#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str;
    return 0;
}