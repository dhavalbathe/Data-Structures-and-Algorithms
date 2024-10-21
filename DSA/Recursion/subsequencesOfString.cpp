// #include<bits/stdc++.h>
// using namespace std;

// void solve(string str, string output, int  index, vector<string> &ans) {
//     //base case
//     if(index >= str.length()) {
//         ans.push_back(output);
//         return;
//     }

//     //exclude
//     solve(str, output, index+1, ans);

//     //include
//     char element = str[index];
//     output.push_back(element);
//     solve(str, output, index+1, ans);
// }

// vector<string> subsequences(string str) {
//     vector<string> ans;
//     string output = "";
//     int index = 0;
//     solve(str, output, index, ans);
//     return ans;
// }
// int main()
// {
//     string str = "abc";
//     vector<string> temp;

//     temp = subsequences(str);
//     for(int i=0;i<temp.size();i++) cout<<temp[i]<<" ";

// }

#include<bits/stdc++.h>
using namespace std;

void solve(string str, string output, int  index, vector<string> &ans) {
    //base case
    if(index >= str.length()) {
        ans.push_back(output);
        return;
    }

    //exclude
    solve(str, output, index+1, ans);

    //include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}

vector<string> subsequences(string str) {
    vector<string> ans;
    string output = "";

    int index=0;
    solve(str, output, index, ans);
    return ans;
}
int main()
{
    string str = "abc";
    vector<string> temp;

    temp = subsequences(str);
    cout<<"Elements in subsequence: "<<temp.size()<<endl;
    for(int i=0;i<temp.size();i++) cout<<temp[i]<<" ";

}