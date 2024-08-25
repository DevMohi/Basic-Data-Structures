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
            if (!c.empty()) {
                char prev = c.top(); //A | B
                if (ch == 'A' && prev == 'B') {
                    c.pop();
                    continue;
                }
                if (ch == 'B' && prev == 'A') {
                    c.pop();
                    continue;
                }
            }

            //Jodi empty na hoi ar uporer cond satisfy na hoi aikane ashbe 
            c.push(ch);
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