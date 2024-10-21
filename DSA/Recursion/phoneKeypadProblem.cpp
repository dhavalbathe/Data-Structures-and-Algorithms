#include<bits/stdc++.h>
using namespace std;

void solve(string digit, vector<string> &ans, string output, int index, vector<string> mapping) {
    if(index >= digit.size()) {
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for(int i=0;i<value.length();i++) {
        output.push_back(value[i]);
        solve(digit, ans, output, index+1, mapping);
        output.pop_back();
    }
}
vector<string> letterCombinations(string digit) {
    vector<string> ans;
    string output = "";
    vector<string> mapping = {"","", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int index = 0;
    solve(digit, ans, output, index, mapping);
    return ans;
}
int main()
{
    string digit = "24";
    vector<string> temp = letterCombinations(digit);
    cout<<"Number of combinations: "<<temp.size()<<endl;
    for(int i=0;i<temp.size();i++) cout<<temp[i]<<" ";
    return 0;
}