#include<stdio.h>

int main(){
	int T[100],n,count=0,i;
	while(n>100 || n<=0){
		printf("La taille de votre matrix doit varrier entre 1 et 100\n");
		printf("Entrer la taille de votre matrix: ");
		scanf("%d",&n);
	}
	printf("Entrer les elements de votre tableau:\n");
	for(i=0;i<n;i++){
		printf("T[%d]=",i);
		scanf("%d",&T[i]);
	}
	printf("Test de trie...\n");
	for(i=1;i<n;i++){
		if(T[i-1]<=T[i]){
			count++;
		}
	}
	if(count==n-1){
		printf("\nVotre tableau est trie\n");
	}else{
		printf("\nVotre tableau n'est pas trie\n");
	}
	for(i=0;i<n;i++){
		printf("%d ",T[i]);
	}
	return 0;
}
