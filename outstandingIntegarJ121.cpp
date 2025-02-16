#include <stdio.h>
#include <math.h>

int det(int num,int dig){
	int stat=1;
    char ls[100]={"0"};
	if (num<100) return 1;
	sprintf(ls,"%d",num);
    int x=ls[0]-48,y=ls[1]-48,z=ls[2]-48;
    for (int i=0;i<dig-2;i++){
        if ((x*y)%10!=z) stat=0;
        x=y;
        y=z;
        z=ls[i+3]-48;
    }
	return (stat)?1:0;
}

int main(){
	int x,sum=0,y,len;
    scanf("%d\n%d",&x,&y);
	len=(int)log10(x)+1;
	for (x;x<=y;x++){
		sum+=det(x,len);
	}
    printf("%d",sum);
    return 0;
}
