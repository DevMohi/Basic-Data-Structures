#include<bits/stdc++.h>
using namespace std;
int main() 
{
    list<string> head;
    string v;

    while (cin>>v && v!="end") 
    {
        head.push_back(v);
    } 
    int Q;
    cin >> Q;
    list<string>::iterator tmp = head.begin();
    while (Q--) 
    {
        string val;
        cin >> val;

        if (val =="visit")
        {
            string visit;
            cin >> visit;

            auto it = find(head.begin(),head.end(),visit);
            if (it != head.end()) 
            {
                tmp=it;
                cout<<*tmp<<endl;
            } 
            else 
            {
                cout<<"Not Available"<<endl;
            }
        } 
        else if (val =="next") 
        {
            if (tmp == prev(head.end())) 
            {
                cout <<"Not Available"<< endl;
            } 
            else 
            {
                ++tmp;
                cout<<*tmp<<endl;
            }
        } 
        else if (val =="prev") 
        {
            if (tmp == head.begin()) 
            {
                cout<<"Not Available"<<endl;
            } 
            else 
            {
                --tmp;
                cout <<*tmp<<endl;
            }
        }
    }
    return 0;
}