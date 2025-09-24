#include<stdio.h>

int main(){
	int A[100][100],B[100][100],C[100][100],n,i,j;
	
	// Lire la taile de la matrice
	while(n>100 || n<=0){
		printf("Votre taille doit etre entre 1 et 100\n");
		printf("Entrer la longuer de votre matrix: ");
		scanf("%d",&n);
	}
	
	//Lire les elements de la matrice A et B
	printf("Entrer les valeurs de votre premiere matrice\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A[%d][%d]=",i,j);
			scanf("%d",&A[i][j]);
		}	
	}
	printf("Entrer les valeurs de votre deuxieme matrice\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("B[%d][%d]=",i,j);
			scanf("%d",&B[i][j]);
		}	
	}
	
	//Somme de la mattrice A et B
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			C[i][j] = A[i][j]+B[i][j];
		}	
	}
	printf("Matrix additionner:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",C[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
