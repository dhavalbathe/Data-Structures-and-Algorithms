#include<iostream>
using namespace std;
int main()
{
    int row = 4, col = 4;
    for(int i = 1; i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}