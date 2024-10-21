// #include<bits/stdc++.h>
// using namespace std;

// void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans) {
//     //base case
//     if(index >= nums.size()) {
//         ans.push_back(output);
//         return;
//     }

//     //exclude
//     solve(nums, output, index+1, ans);

//     //include
//     int element = nums[index];
//     output.push_back(element);
//     solve(nums, output, index+1, ans);
// }
// vector<vector<int>> subsets(vector<int> &nums) {
//     vector<vector<int>> ans;
//     vector<int> output;
//     int index = 0;
//     solve(nums, output, index, ans);
//     return ans;
// }
// int main()
// {
//     vector<int> nums = {1, 2};
//     vector<vector<int>> temp = subsets(nums);
//     cout<<"No of subsets: "<<temp.size()<<endl;
//     for(int i=0;i<temp.size();i++) {
//         for(int j=0;j<temp[i].size();j++) {
//             cout<<temp[i][j];
//         }
//         cout<<" ";
//     }
// }


#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans) {
    //base case
    if(index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    //exclude
    solve(nums, output, index+1, ans);

    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);
}
vector<vector<int>> subsets(vector<int> &nums) {
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}
int main()
{
    vector<int> nums = {1, 2};
    vector<vector<int>> temp = subsets(nums);
    cout<<"No of subsets: "<<temp.size()<<endl;
    for(int i=0;i<temp.size();i++) {
        for(int j=0;j<temp[i].size();j++) {
            cout<<temp[i][j];
        }
        cout<<" ";
    }
}