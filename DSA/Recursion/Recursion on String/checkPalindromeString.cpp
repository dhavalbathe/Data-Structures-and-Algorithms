//? Program to check if the string is parlindromeString or not

#include<bits/stdc++.h>
using namespace std;

bool checkPalindromeString(string &name, int start, int length) {
    if(start > length) return false;
    if(name[start] != name[length]) return false;
    return checkPalindromeString(name, start+1, length-1);
}
int main()
{

    string name = "india";
    int start = 0, length = name.length();

    bool result = checkPalindromeString(name, start, length-1);
    if(result) cout<<"Palindrome String";
    else cout<<"Not Palindrome String";
}