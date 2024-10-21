// Fibonacchi number

#include<iostream>
using namespace std;
int main()
{
    int first = 0, second = 1;
    int n, third;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Fibonacci series: "<<first<<" "<<second<<" ";
    for(int i=2;i<=n;i++)
    {
        third = first + second;
        cout<<third<<" ";
        first = second;
        second = third;
    }

    return 0;
}