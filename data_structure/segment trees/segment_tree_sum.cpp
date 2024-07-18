#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#define ll long long
class SegmentTree{
   vector<long long> tree;
public:
    SegmentTree(long long n){
        tree.resize(4*n+1);
    }
    void build(long long node,long long low,long long high,vector<long long>& vec){
           if(low==high){
            tree[node]=vec[high];
            return;
           }
           long long mid= low+(high-low)/2;
           build(2*node+1,low,mid,vec);
           build(2*node+2,mid+1,high,vec);
           tree[node]=tree[2*node+2]+tree[2*node+1];
           return;
    }
   void update(long long node,long long low,long long high,long long val,long long index){
           if(high==low){
                 tree[node]=val;
                 return;
           }
           long long mid=low+(high-low)/2;
           if(index<=mid){
            update(2*node+1,low,mid,val,index);
           }
           else{
                    update(2*node+2,mid+1,high,val,index);
           }
           tree[node]=tree[2*node+2]+tree[2*node+1];
    }
    ll query(long long ind,long long low,long long high,long long left,long long right){
        if(low>right || high<left){
            return 0;
        }
        if(low>=left && high<=right){
            return tree[ind];
        }
        long long mid=low+(high-low)/2;
        long long LeftQuery=query(2*ind+1,low,mid,left,right);
        long long RightQuery=query(2*ind+2,mid+1,high,left,right);
        return LeftQuery+RightQuery;
                  
    }


};



void helper(){
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while(t){

 t--;}

}