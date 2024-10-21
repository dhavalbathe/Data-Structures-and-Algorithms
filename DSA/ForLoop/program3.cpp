// Prime number

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag = 0;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n % i == 0)
        {
            cout<<"The number is not prime";
            break;
        }
        flag = 1;
    }

    if(flag == 1) cout<<"The number is prime";

    cout<<endl;
    }

    return 0;
}