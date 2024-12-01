#include<bits/stdc++.h>
using namespace std;

class demo
{
    public: int x;
    public: 
    void getdata()
    {
        cout<<"Enter the number: ";
        cin>>x;
    }
    void putdata()
    {
        cout<<"Number : "<<x<<endl;
    }

    //addition
    demo operator+(demo bb)
    {
        demo cc;
        cc.x = x + bb.x;
        return cc;
    }

    //substraction
    demo operator-(demo bb)
    {
        demo cc;
        cc.x = x - bb.x;
        return cc;
    }

    //multiplication
    demo operator*(demo bb)
    {
        demo cc;
        cc.x = x * bb.x;
        return cc;
    }

    //division
    demo operator/(demo bb)
    {
        demo cc;
        cc.x = x / bb.x;
        return cc;
    }
};

int main()
{
    demo aa, bb, cc;
    aa.getdata();
    bb.getdata();

    cc = aa / bb;
    cc.putdata();
    return 0;
}