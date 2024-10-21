//print addition of n numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    cout<<endl;
    cout<<"Sum : "<<sum;

    return 0;

}