//? increment - ++ and decrement - -- operator

#include<bits/stdc++.h>
using namespace std;

class demo
{
    public: int a;
    public:
    void getdata()
    {
        cout<<"Enter a number: "<<endl;
        cin>>a;
    }
    void putdata()
    {
        cout<<"value of a : "<<a<<endl;
    }

    //pre increment operator
    void operator++()
    {
        a = a+1;
    }
    //pre decrement operator
    void operator--()
    {
        a = a-1;
    }

    //post increment operator
    void operator++(int)
    {
        a = a + 1;
    }

    //pre decrement operator
    void operator--(int)
    {
        a = a - 1;
    }
};

int main()
{
    demo aa;
    aa.getdata();
    aa.putdata();
    aa++;
    aa.putdata();
    return 0;
}