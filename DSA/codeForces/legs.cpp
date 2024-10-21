#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cout<<"Enter the no of test cases: ";3
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans = n/4;
        if(n%4 == 0) cout<<ans;
        else cout<<ans+1;
    }

    return 0;
}