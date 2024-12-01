#include<bits/stdc++.h>
using namespace std;
class complex
{
    public: double r, i;
    public: 
    void getdata()
    {
        cout<<"Enter the real and imaginary number: ";
        cin>>r>>i;
    }
    void showdata()
    {
        cout<<"Complex No. : "<<r<<" "<<i<<"i"<<endl;
    }

    complex operator +(complex bb)
    {
        complex cc;
        cc.r = r + bb.r;
        cc.i = i + bb.i;
        return cc;
    }
};

int main()
{
    complex aa, bb;
    aa.getdata();
    bb.getdata();

    complex ans;
    ans = aa + bb;
    cout<<"real: "<<ans.r<<" "<<"img: "<<ans.i<<endl;
    return 0;
}
