#include<stdio.h>

int main(){
	int T[100],V[100],n,i,j;
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
	printf("Votre tableau:\n");
	
	for(i=0;i<n;i++){
		printf("%d ",T[i]);
	}
	i=0;
	j=n-1;
	while(j>=0){
			V[i]=T[j];
			j--;
			i++;
	}
	printf("\nVotre tableau inverser\n");
	for(i=0;i<n;i++){
		T[i]=V[i];
	}
	for(i=0;i<n;i++){
		printf("%d ",T[i]);
	}
	return 0;
}
