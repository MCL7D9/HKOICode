#include <stdio.h>
int times=0;
int *sort_asc(int *list,int length){
	for (int i=0;i<(length-1);i++){
		for (int j=(i+1);j<length;j++){
			int TEMP;
			if (list[i]>list[j]){
				TEMP=list[i];
				list[i]=list[j];
				list[j]=TEMP;
				times++;
			}
		}
	}
	return list;
}
int *sort_des(int *list,int length){
		for (int i=0;i<(length-1);i++){
		for (int j=(i+1);j<length;j++){
			int TEMP;
			if (list[i]<list[j]){
				TEMP=list[i];
				list[i]=list[j];
				list[j]=TEMP;
				times++;
			}
		}
	}
	return list;
}
int main(){
	int len,order;
	scanf("%d%d",&len,&order);
	int ls[len];
	for (int i=0;i<len;i++){
		scanf("%d",(ls+i));
	}
	if (order==0){
		sort_asc(ls,len);
	} else{
		sort_des(ls,len);
	}
	printf("%d\n",times);
	for (int i=0;i<len;i++){
		printf("%d ",*(ls+i));
	}
	return 0;
}