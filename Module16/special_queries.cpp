#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        
        // string x;
        // cin>>x;
        // q.push(x);

        int x;
        cin>>x;

        if(x == 0){
            string a;
            cin>>a;
            q.push(a); 
        }
        else if(x == 1){
            if(q.empty()){
                cout<<"Invalid"<<endl;
            }
            else{
               string y = q.front();
               q.pop();
               cout<<y<<endl; 
            }
        }

    }
    // while (!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    
    return 0;
}