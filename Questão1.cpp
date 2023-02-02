#include <stdio.h>

void selection_sort(int num[], int ordem ){
	
	int i,j,min,aux;
	

    for(i=0; i<ordem; i++){
      min=i;
	  for(j=(i+1); j<ordem; j++){
	    if(num [j] < num[min]){
	       min=j;	
		}
		
	}
	if(i !=min){
	aux=num[i];
	num[i]=num[min];
	num[min]=aux;
	}
  }
 
}

int main(){
	
	int idade[10];
	
	for(int i=0; i<10; i++){
		printf("Digite as idades: ");
		scanf("%d",&idade[i]);	
		}
		
		selection_sort(idade,10);
		
		 for(int j=0; j<10; j++){
			
		printf("A Ordem Cresente Das Idades Informadas São %d:\n",idade[j]);	
			
		}
	
	return 0;
}
