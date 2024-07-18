#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include<bitset>
#define ll long long
void helper(){
}
ll binary_exp(ll a, ll b){
    if(b==0){
        return 1;
    }
    ll ex=binary_exp(a,b/2);
    if((b&1)==1){
        
        return ex*ex*a;
    }
    else{
        return ex*ex;

    }
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 ll t;
 cin>>t;
 
 while(t--){
  ll n;
  cin>>n;
   
  ll  ct=0;
  ll pos=0;
  bitset<32> bt(n);
ll br=0;
ll fs=0;

for(ll i=31;i>=0;i--){
    if(bt.test(i)){
        fs=i;
       
    }
}
  for(ll i=31;i>=0;i--){
   if(n & (1<<i)){
    if(pos==0){pos=i;}
    if(ct==0 || ct==2){ct++;}
   }
   else{
    if(ct==1){ct++;}
   }
  }
  if(ct!=3){cout<<0<<"\n";continue;}
  
  ll crr=0;
  ll ans=1e18+2;
  
  for(ll i=pos;i>=0;i--){
   crr+=binary_exp(2,i);
   
   if(crr<n){continue;}
   ans=min(ans,crr-n);
  }
  cout<<ans<<"\n";
  
 }
 
 return 0;
}