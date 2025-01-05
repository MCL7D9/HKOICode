#include <stdio.h>
#include <math.h>

int main(){
	int x,y,z=0;
	scanf("%d\n%d",&x,&y);
	for (int i=0;i<(pow(2,x));i++){
		z=pow(10,((i+8)%x));
		printf("%03d\n",y);
		if (((int)(y/z))%2==0){
			y+=z;
		}else{
			y-=z;
		}
	}
	return 0;
}
