//Program to calculate sum n numbers using recursion
#include<bits/stdc++.h>
using namespace std;
int calculate_sum(int n) {
    if(n == 0) return 0;
    return n + calculate_sum(n-1);
}
int main()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        cout<<calculate_sum(n);
        cout<<endl;
    }
}