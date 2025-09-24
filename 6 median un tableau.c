#include<stdio.h>

int Switch(int *a,int *b){
	int c=*b;
	*b=*a;
	*a=c;
}

int main(){
	int T[100],n,i,j,MI;
	float median;
	while(n>100 || n<=0){
		printf("La taille de votre matrix doit varrier entre 1 et 100\n");
		printf("Entrer la taille de votre matrix: ");
		scanf("%d",&n);
	}
	printf("Entrer les elements de votre tableau: \n");
	for(i=0;i<n;i++){
		printf("T[%d]=",i);
		scanf("%d",&T[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			if(T[j-1]>T[j]){
				Switch(&T[j-1],&T[j]);
			}
		}
	}
	printf("Voici votre tableau trie:\n");
	for(i=0;i<n;i++){
		printf("%d ",T[i]);
	}
	MI=(n/2);
	if(n%2==0){
		median=(float)(T[MI]+T[MI-1])/2;
	}else{
		median=T[MI];
	}
	printf("\nMedian=%.1f",median);
	return 0;
}
