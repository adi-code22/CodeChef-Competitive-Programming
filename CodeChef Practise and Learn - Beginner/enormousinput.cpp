//            The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least 2.5MB of input data per second at runtime.
//
//            Input
//            The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.
//
//            Output
//            Write a single integer to output, denoting how many integers ti are divisible by k.
//
//            Example
//            Input:
//            7 3
//            1
//            51
//            966369
//            7
//            9
//            999996
//            11
//
//            Output:
//            4
//             <------- SOLUTION -------->

#include <bits/stdc++.h>
using namespace std;

int main(){
    int count=0, n, k, i=0;
    cin>>n>>k;
    int A[n], temp=n;
    while(temp--){
        cin>>A[i];
        i++;
    }
    for(int j=0; j<n; j++){
        if (A[j]%k==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}