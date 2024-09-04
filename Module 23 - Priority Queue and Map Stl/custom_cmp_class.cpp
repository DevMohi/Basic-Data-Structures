#include<bits/stdc++.h>
using namespace std;

class Person{
    public: 
        string name;
        int roll;
        int marks;
    
    Person(string name, int roll, int marks){
        this -> name = name;
        this -> roll = roll;
        this -> marks = marks; 
    }
};

class cmp{
    public:     
        bool operator()(Person a, Person b){
            if(a.marks > b.marks) return true;
            else if(a.marks < b.marks) false;
            else {
                if(a.roll > b.roll){
                    return true;
                }
                else{
                    return false; 
                }
            } 
        }
};

int main(){
    int n;
    cin>>n;
    priority_queue<Person , vector<Person> , cmp >pq;
    for(int i=0;i<n;i++){
        string name;
        int roll;
        int marks;
        cin>>name>>roll>>marks;
        Person obj(name,roll,marks); 
        pq.push(obj); 
    }
    while(!pq.empty()){
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}