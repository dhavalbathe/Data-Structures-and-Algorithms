/* (a+b) % M = ((a%M) + (b%M)) % M 
    (a*b) % M = ((a%M) * (b%M)) % M
    (a-b) % M = ((a%M) - (b%M) + M) % M
    (a/b) % M = ((a%M) * (b^-1) % M) % M   */

/*? Given a number N. Print its factorial.
    Constraints :
    1 <= N <= 100

    print answer module M
    where M = 47
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long fact = 1;
    int M = 47;
    for(int i=2;i<=n;i++) {
        fact = (fact * i) % M;
    }
    cout<<fact<<endl;
}