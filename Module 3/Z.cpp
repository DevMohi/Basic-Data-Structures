//Brute force method 
// AI code e time complexity ase 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    } //O(N)

    sort(a,a+n);  //O(NlogN) 

    while(q--){ //O(n*log(n))
        int x;
        cin>>x; 
        bool flag = false;
        int l =0 ;
        int r = n - 1;
        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == x){
                flag = true;
                break; 
            }
            if(x > a[mid]){
                //dane jabo 
                l = mid+ 1;
            }
            else{
                //bame jaba
                r = mid-1;
            }
        }

        if(flag == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }

    return 0;
}

// finally 
//O(n) + O(nLogN)  //O(n) chuto so worst case hocce O(NlogN) 