#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,4,1,2,3};
    int start=0, end=4, mid;
    int ans;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid] < arr[0])
        {
            ans = mid;
            end = mid - 1;
        }
        else 
        start = mid + 1;
    }
    //?! Error in this code
    cout<<"smallest element is : "<<arr[ans];

    return 0;

}