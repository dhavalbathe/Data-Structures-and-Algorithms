//Program to calculate the factorial of a number using recursion
#include<bits/stdc++.h>
using namespace std;
int calculate_fact(int n) {
    if(n == 0) return 1;
    return n*calculate_fact(n-1);
}
int main()
{
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        cout<<"fact: "<<calculate_fact(n)<<endl;
    }
}