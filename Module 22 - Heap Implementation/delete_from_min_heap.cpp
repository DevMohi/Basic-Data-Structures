#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v , int x){
    v.push_back(x);

    int cur_index = v.size() - 1; 
    while(cur_index != 0){
    int parent_index = (cur_index - 1)/2; 
        
    if(v[parent_index] > v[cur_index]){
        swap(v[parent_index], v[cur_index]);   
    }
    else {
        break; 
    }
    cur_index = parent_index; 
    }
}

void printheap(vector <int> v){
    for(int val:v){
        cout<<val<<" "; 
    }
    cout<<endl; 
}

void deleteHeap(vector<int>  &v){
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0; 
    while(true){
        int leftindex = cur * 2 + 1;
        int rightindex = cur * 2 + 2;
        int lastindex = v.size() - 1; 
        if (leftindex <= lastindex && rightindex <= lastindex ){
            //duita index e ase , check korbo kon index boro and if oitar value parent value theke boro naki
            if(v[leftindex] <= v[rightindex] && v[leftindex] < v[cur]){
                swap(v[leftindex],v[cur]);
                cur = leftindex;
            }
            else if (v[rightindex <= v[leftindex] && v[rightindex] < v[cur]]){
                swap(v[rightindex], v[cur]);
                cur = rightindex; 
            }
            else{
                break; 
            }
        }
        else if(leftindex  <= lastindex){
            //shudu left index ase 
            if(v[leftindex] < v[cur]){
                swap(v[leftindex],v[cur]);
                cur = leftindex;               
            }
            else{
                break; 
            }
        }
        else if(rightindex <= lastindex){
            // shudu right index ase 
            if(v[rightindex] < v[cur]){
                swap(v[rightindex], v[cur]);
                cur = rightindex;
            }
            else{
                break;
            }
        }
        else{
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        insert_heap(v,x);
    }
    deleteHeap(v);
    printheap(v);
    deleteHeap(v);
    printheap(v);

    return 0;
}