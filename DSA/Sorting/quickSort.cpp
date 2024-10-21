// #include<bits/stdc++.h>
// using namespace std;

// int partition(vector<int> &arr, int low, int high) {
//     int pivat = arr[low];
//     int i = low, j = high;
//     while(i < j) {
//         while(arr[i] <= pivat && i <= high-1) i++;
//         while(arr[j] > pivat && j >= low+1) j--;

//         if(i < j) swap(arr[i], arr[j]);
//     }
//     swap(arr[low], arr[j]);
//     return j;
// }
// void quickSort(vector<int> &arr, int low, int high) {
//     if(low < high) {
//         int pIndex = partition(arr, low, high);
//         quickSort(arr, low, pIndex-1);
//         quickSort(arr, pIndex+1, high);
//     }
// }
// int main()
// {
//     vector<int> arr = {3, 5, 1, 4, 2};
//     quickSort(arr, 0, arr.size()-1);
//     cout<<"Sorted Array: ";
//     for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
// }

// //! Time Complexity = O(N*logN)
// //! Space Complexity = O(1)


#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivat = arr[low];
    int i=low, j=high;
    while(i<j) {
        while(arr[i]<=pivat && i <= high-1) i++;
        while(arr[j] > pivat && j >= low+1) j--;
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partition(arr, low, high);
        //sorting left part
        quickSort(arr, low, pIndex-1);
        //sorting right part
        quickSort(arr, pIndex+1, high);
    }
}
int main() {
    vector<int> arr = {4, 6, 5, 2, 1, 9};
    quickSort(arr, 0, arr.size()-1);
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
}