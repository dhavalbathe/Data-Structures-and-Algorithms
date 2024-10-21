#include<iostream>
using namespace std;
int main()
{
    int n=5;
    char letter = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<letter;
        }
        cout<<endl;
        letter++;
    }

    return 0;
}