#include <iostream>
#include <string>
using namespace std;

int main(){
    string strSrc, strCmp;
    getline(cin,strSrc);
    getline(cin,strCmp);
    bool flag=true;
    int j=0;
    int countX=0, countY=0;
    int lenS=strSrc.length(), lenC=strCmp.length();
    for (int i=0;i<lenS-lenC+1;i++){
        flag=1;
        j=0;
        while (flag&&j<lenC){
            if (strSrc[i+j]!=strCmp[j])flag=0;
            j++;
        }
        if (flag)countX++;
    }
    for (int i=0;i<lenS-lenC+1;i++){
        j=0;
        flag=1;
        while (flag&&j<lenC){
            if (strSrc[i+j]!=strCmp[j])flag=0;
            j++;
        }
        if (flag){
            countY++;
            i+=lenC-1;
        }
    }
    cout<<countX<<'\n'<<countY;
    return 0;
}
