#include <iostream>
#include <string>

int det(int num,int dig){
	bool stat=true;
	if (num<100) return 1;
	for (int i=0;i<len-2,stat;i++){
		if atoi((atoi(num.str()[i])*atoi(num.str()[i+1])).str()[-1]!=atoi(num.str()[i+2])stat=false;
	}
	return (stat)?1:0;
}

void main(){
	int x,sum=0,y,len;
	cin>>x>>y;
	bool flag=true;
	len=(int)log(x)+1
	for (x;x<=y;x++){
		sum+=det(x,len);
	}
	cout<<sum;
}
