#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: int id;
    char name[20];
    public:
    friend void operator >>(istream &in, Student &s)
    {
        cout<<"Enter student id and name: ";
        in >> s.id >> s.name;
    }

    friend void operator << (ostream &out, Student &s)
    {
        out << "ID: "<<s.id<<endl;
        out << "Name: "<<s.name<<endl;
    }
};

int main()
{
    Student s;
    cin>>s;
    cout<<s;
    return 0;
}