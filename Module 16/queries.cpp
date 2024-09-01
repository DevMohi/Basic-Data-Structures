#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    int n;
    cin>>n; 

    for(int i=0 ;i<n; i++){
        int x; 
        cin>> x; 

        if(x == 0){
            string y;
            cin>>y;
            q.push(y);
        }
        else if(x == 1 && q.empty()){
            cout<<"Invalid"<<endl; 
        }
        else if(x == 1){
            cout<<q.front()<<endl;
            if(q.empty()){
                cout<<"Invalid"<<endl;
            }
            else{
                q.pop();
            }
        }
    }
    return 0;
}