// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int> &arr, int start, int mid, int end)
// {
//     vector<int> temp;
//     int left = start;
//     int right = mid+1;

//     while(left<=mid && right<=end)
//     {
//         if(arr[left] <= arr[right])
//         {
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     while(left <= mid)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=end)
//     {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for(int i=start;i<=end;i++)
//     {
//         arr[i] = temp[i-start];
//     }
// }
// void mergeSort(vector<int> &arr, int start, int end)
// {
//     if(start >= end) return;
//     int mid = start + (end - start)/2;
//     //*Left part Sorting
//     mergeSort(arr, start, mid);

//     //*Right part Sorting
//     mergeSort(arr, mid+1, end);
//     merge(arr, start, mid, end);
// }
// int main()
// {
//     vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
//     int n = arr.size();

//     cout<<"Before Sorting Array: "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     mergeSort(arr, 0, n-1);
//     cout<<"After Sorting Array: "<<endl;
//     for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

void marge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp;
    int left = start;
    int right = mid+1;

    while(left<=mid && right<=end) {
        if(arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=end) {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=start; i<=end; i++) {
        arr[i] = temp[i-start];
    }
}
void margeSort(vector<int> &arr, int start, int end) {

    if(start >= end) return;
    int mid = start + (end-start)/2;

    //?Sort Left Part
    margeSort(arr, start, mid);
    //? Sort Right Part
    margeSort(arr, mid+1, end);

    //?merging Sorted array
    marge(arr, start, mid, end);
}
int main()
{
    vector<int> arr = {1, 4, 2, 5, 3};
    int n=arr.size();

    cout<<"Unsorted Array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    margeSort(arr, 0, n-1);
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}