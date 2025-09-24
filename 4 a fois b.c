#include<stdio.h>

int main(){
	int i,j,a,b,c=0;
	printf("Enter a and b\n");
	scanf("%d%d",&a,&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			c=c+1;
		}
	}
	printf("%dX%d=%d",a,b,c);
	return 0;
}
