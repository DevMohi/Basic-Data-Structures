//My Code 
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        stack<char> c;

        for (char ch:s) {

            if(c.empty()){
                c.push(ch);
            }
            else if(!c.empty()){
                char prev = c.top();
                if(ch == 'A' && prev == 'B'){
                    c.pop();
                }
                else if(ch == 'B' && prev == 'A'){
                    c.pop();
                }
                else{
                    c.push(ch);
                }
            }
        }
    
        
        if(c.empty()){
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}