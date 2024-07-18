#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

long long  binary_exp(long long a, long long b){
    if(b==0){
        return 1;
    }
    long long ex=binary_exp(a,b/2);
    if((b&1)==1){
        
        return ex*ex*a;
    }
    else{
        return ex*ex;

    }
}
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);

cout<<binary_exp(2,3);

}