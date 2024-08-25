//Couldnt complete
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        string s;
        cin>>s;

        stack<char> q;
        stack<char> copy;

        for( char  ch : s){
            if(q.empty() && q.top() == ch){
                q.push(ch);
            }
            else if(!q.empty()){
                char prev = q.top(); 

                if(ch == prev){
                    q.pop();
                }

                else if ((prev == 'R' && ch == 'B') || (prev == 'B' && ch == 'R')) {
                    q.pop();
                    q.push('P');
                }

                else if ((prev == 'R' && ch == 'G') || (prev == 'G' && ch == 'R')) {
                    q.pop();
                    q.push('Y');

                }
                else if ((prev == 'B' && ch == 'G') || (prev == 'G' && ch == 'B')) {
                    q.pop();
                    q.push('C');
                }
                else{
                    q.push(ch);
                    
                }
            }
        }

        while (!q.empty())
        {
            // cout << q.top(); 
            copy.push(q.top());
            q.pop();
        }

        while (!copy.empty())
        {
            cout << copy.top();   
            copy.pop();
        }

        cout<<endl;  
    }

    return 0;

}