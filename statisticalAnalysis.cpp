#include <iostream>
#include <vector>
using namespace std;

int main(){
     int inp;
     vector<int>ls;
     cin>>inp;
     ls.resize(inp);
     for (int i=inp;i>0;i--)cin>>(ls[inp-i]);
     
}