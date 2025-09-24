#include<stdio.h>

int main(){
	int n,i,j,k,A[100][100],B[100][100],C[100][100];
	while(n>100 || n<=0){
		printf("Votre taille doit etre entre 1 et 100\n");
		printf("Entrer la longuer de votre matrix: ");
		scanf("%d",&n);
	}
	printf("Entrer les element de votre premiere tableaux\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d]=",i,j);
			scanf("%d",&A[i][j]);
		}
		
		
	}
	printf("Entrer les element de votre deuxieme tableaux\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("B[%d][%d]=",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	printf("Le produit de vos matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			C[i][j]=0;
			for(k=0;k<n;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
