#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int x,y=0;
    cin>>x;
    for (int i=0;i<x;i++){
        y=x/2;
        for (int j=0;j<x;j++){
           (j==abs(y-i)||j==(y+i)||(i+j)==(x+((x-3)/2)))?cout<<"#":cout<<" "; 
        } 
        cout<<endl;
    }
    return 0;
}
