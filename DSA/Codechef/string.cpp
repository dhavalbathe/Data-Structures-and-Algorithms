#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string arr;
        cin>>arr;

        int count = 1;
        for(int i=0;i<n-1;i++)
        {
            int temp = 1;
            if(arr[i] == arr[i+1]) 
            {
                temp++;
                count = max(count, temp);
                cout<<"Temp: "<<temp<<endl;
            }
            else temp = 1;
        }

        cout<<"count: "<<count<<endl;
    }
}