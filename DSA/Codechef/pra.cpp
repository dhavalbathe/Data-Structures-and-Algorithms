#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector< int > arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    int maxi = 0;
    for(int i=0; i<k; i++) maxi += arr[i];

    for(int i=k; i<n; i++) {
        int sum = (maxi + arr[i]) - arr[i-k];
        maxi = max(sum, maxi);
    }

    cout << maxi << endl;
    
}