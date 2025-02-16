#include <iostream>
#include <cmath>
using namespace std;

void alg(long num,long fac=2){
    if (fac>=num||fac>sqrt(num)){
        cout<<fac;
        return;
    }
    if ((fac!=2&&(!fac%2))||num%fac){
        alg(num,fac+1);
    } else {
        cout<<fac<<"*";
        alg(num/fac,2);
    }
}

int main(){
    long x;
    cin>>x;
    cout<<x<<"=";
    alg(x,2);
    return 0;
}
