#include<bits/stdc++.h>
using namespace std;
// Brute force  
// int main(){
//     int n,q;
//     cin>>n>>q;
//     int a[n];

//     for(int i =0; i<n;i++){
//         cin>>a[i];
//     }

//     //value goes till 0
//     while(q--){
//         int l,r;
//         cin>>l>>r;
//         l--;
//         r--;
//         int sum = 0;
//         for(int i=l; i<=r; i++){
//             sum+=a[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }

//Optimized code
//Prefix sum 

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,q;
    cin>>n>>q;
    long long int a[n];

    for(int i =0; i<n;i++){
        cin>>a[i];
    }

    //Prefix sum 
    long long int pre[n];
    pre[0] = a[0];

    for(int i=1; i<n; i++){
        pre[i] = a[i] + pre[i-1];
    }
    // for(int i=0; i<n; i++){
    //     cout<<pre[i]<<" ";
    // }

    //value goes till 0
    while(q--){
        long long int l,r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum = 0;
        if(l==0){//jodi 0 hoi
            sum = pre[r]; //pre[3]
        }
        else{
            //jodi 1 theke 3 hoi
            // pre[2] - pre[0];
            //0 nai so 12 

            sum = pre[r] - pre[l-1];

        }
        cout<<sum<<endl; 
    }
    return 0;
}