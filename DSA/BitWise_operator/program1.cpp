#include<iostream>
using namespace std;
int main()
{
    int a=4, b=6;
    cout<<" a|b "<<(a|b)<<endl;
    cout<<" a&b "<<(a&b)<<endl;
    cout<<" ~a "<<(~a)<<endl;
    cout<<" a^b "<<(a^b)<<endl;


    cout<<(19 >> 1)<<endl; // divide by 2 , 1 time
    cout<<(19 >> 2)<<endl; // divide by 2, 2 times
    cout<<(17 << 1)<<endl; // multiply by 2, 2^1 times
    cout<<(17 << 2)<<endl; // multiply by 2, 2^2 times
    
    int i=4;
    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i);
    return 0;
}