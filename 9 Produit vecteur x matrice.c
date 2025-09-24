#include<stdio.h>
#include<conio.h>

int main(){
	int V1[3],V2[3],T[3],i,j,k,n,M[3][100],S[100];
	printf("Entrer les coefficient de votre premiere vecteur [a,b,c] ai+bj+ck:\n");
	for(i=0;i<3;i++){
		scanf("%d",&V1[i]);
	}
	printf("Entrer les coefficient de votre deuxieme vecteur [d,e,f] di+ej+fk:\n");
	for(i=0;i<3;i++){
		scanf("%d",&V2[i]);
	}
	printf("Vecteur 1(V1):  %di + %dj + %dk\n",V1[0],V1[1],V1[2]);
	printf("Vecteur 2(V2):  %di + %dj + %dk\n",V2[0],V2[1],V2[2]);
	printf("| i j k |\n");
	printf("| %d %d %d |\n",V1[0],V1[1],V1[2]);
	printf("| %d %d %d |\n",V2[0],V2[1],V2[2]);
	T[0]=V1[1]*V2[2]-V1[2]*V2[1];
	T[1]=V1[0]*V2[2]-V1[2]*V2[0];
	T[2]=V1[0]*V2[1]-V1[1]*V2[0];
	printf("V1xV2= (%d %d %d)\n",T[0],T[1],T[2]);
	getch();
	printf("Le produit vectorielle a 3 dimension donc les ligne de votre matrice est egale a 3\n");
	printf("\nEntrer les nombre de colonne de votre matrice\n");
	while(n>100 || n<=0){
		printf("La taille de votre matrix doit varrier entre 1 et 100\n");
		printf("Entrer la taille de votre matrix: ");
		scanf("%d",&n);
	}
	printf("Entrer les element de votre matrix de 3X%d\n",n);
	for(i=0;i<3;i++){
		for(j=0;j<n;j++){
			scanf("%d",&M[i][j]);
		}
	}
	for(j=0;j<n;j++){
			S[j]=0;
		for(i=0;i<3;i++){
				S[j]+=T[i]*M[i][j];
			}
	}
	printf("Answer:");
	for(j=0;j<n;j++){
			printf("%d ",S[j]);
	}
	return 0;
}
