//First and last occurence of an element

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 5, 6, 7, 8, 8, 8};
    for(int i=0;i<arr.size();i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int target;
    cout<<"Enter the target Element: ";
    cin>>target;
    int start = 0, end = arr.size() - 1, mid, first = -1, last = -1;

    //First occuerence
    while(start<=end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < target)
        start = mid + 1;
        else
        end = mid - 1;
    }

    //Last occuerence

    start = 0, end = arr.size() - 1;

    while(start<=end)
    {
        if(arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target)
        start = mid + 1;
        else
        end = mid - 1;
    }

    cout<<first<<" "<<last;

    return 0;
}