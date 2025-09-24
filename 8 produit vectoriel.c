#include<stdio.h>

int main(){
	int V1[3],V2[3],T[3],i;
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
	printf("V1xV2= (%d %d %d)",T[0],T[1],T[2]);
	return 0;
}
