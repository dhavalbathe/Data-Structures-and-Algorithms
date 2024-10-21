//? Program to reverse the string using recursion

#include<bits/stdc++.h>
using namespace std;
void reverseString(string &s, int start, int end) {
    if(start > end) return;
    swap(s[start], s[end]);
    reverseString(s, start+1, end-1);
}
int main()
{
    string s = "india";
    int start = 0, end = s.length()-1;
    reverseString(s, start, end);
    cout<<s;
}