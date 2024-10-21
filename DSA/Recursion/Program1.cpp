//Program to print numbers from 1 to n using recursion
#include<bits/stdc++.h>
using namespace std;
void print_number(int i, int n) {
    if(i > n) return;
    cout<<i<<" ";
    print_number(i+1, n);
}
int main()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        print_number(1, n);
        cout<<endl;
    }
}