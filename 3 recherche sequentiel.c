#include<stdio.h>

int main(){
	int i,n,num,T[100],test;
	while(n>100 || n<=0){
		printf("Votre taille doit etre entre 1 et 100\n");
		printf("Entrer la longuer de votre matrix: ");
		scanf("%d",&n);
	}
	printf("Enter les element du tableau\n");
	for(i=0;i<n;i++){
		printf("T[%d]=",i);
		scanf("%d",&T[i]);
	}
	printf("Entrer l'element a chercher: ");
	scanf("%d",&num);
	i=0;
	test=0;
	while(i<n){
		if(T[i]==num){
			printf("element %d trouve a la poition %d a l'index %d\n",num,i+1,i);
			test=1;
			i=n;
		}
		i++;
	}
	if(test!=1){
		printf("Element non trouver");
	}
	return 0;
}
