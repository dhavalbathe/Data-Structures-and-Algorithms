//Program to print numbers from 1 to n using recursion without using + operator
#include<bits/stdc++.h>
using namespace std;
void print_number(int i) {
    if(i < 1) return;
    print_number(i-1);
    cout<<i<<" ";
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        print_number(n);
        cout<<endl;
    }
}