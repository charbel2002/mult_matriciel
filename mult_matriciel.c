#include <stdio.h>
#include <stdlib.h>

/* made by Dev master Benin -->>>>>>> all */

/* Note that ive choosen to use dat structure to make all fun the most*/

typedef struct component matrice;

struct component{
	
	int line_1[3];
	
	int line_2[3];
	
	int line_3[3];
	
};

void init(matrice *model); /* if you have alredy experienced structures in C langage, you 'll be at ease with the following but just understand


th algorithm wil be the focus right now */

matrice transposer(matrice model);//this function is for transposing the matrice given in params

int main() {
	
	int i = 0, j = 0;
	
	matrice a, b, final;
	
	/*here we initialize the function init to set both a and b matrice components to 0*/
	
	matrice* initzer = NULL;
	
	initzer = &a;
	
	init(initzer);
	
	initzer = &b;
	
	init(initzer);
	
	
	
	
	
	
	/*=========We end up with initialization==============*/
	
	/*
	
	=====Algorithm=====
	
	
	- we use matrice product rules according to algebre course to make calculation
	
	*/
	
	//==========
	
	//first we ask user to provide data
	
	for( i = 0 ; i < 2 ; i++ ){
		
		if( i == 0){
			
			printf("\n\nEntrez les données de la matrice %d",i+1);
			
			for( j = 0 ; j < 3 ; j++ ){
				
				printf("\nLigne %d > ",j+1);
				
				if( j == 0){
					scanf("%d %d %d",&a.line_1[0], &a.line_1[1], &a.line_1[2]); //assume the format to provide data is clear right now
				}
				
				if( j == 1){
					scanf("%d %d %d",&a.line_2[0], &a.line_2[1], &a.line_2[2]);
				}
				
				if( j == 2){
					scanf("%d %d %d",&a.line_3[0], &a.line_3[1], &a.line_3[2]);
				}
				
			}
			
		}
		
		if( i == 1){
			
			printf("\n\nEntrez les données de la matrice %d",i+1);
			
			for( j = 0 ; j < 3 ; j++ ){
				
				printf("\nLigne %d > ",j+1);
				
				if( j == 0){
					scanf("%d %d %d",&b.line_1[0], &b.line_1[1], &b.line_1[2]);
				}
				
				if( j == 1){
					scanf("%d %d %d",&b.line_2[0], &b.line_2[1], &b.line_2[2]);
				}
				
				if( j == 2){
					scanf("%d %d %d",&b.line_3[0], &b.line_3[1], &b.line_3[2]);
				}
				
			}
			
		}
		
	}
	
	final.line_1[0] = (a.line_1[0] * b.line_1[0]) + (a.line_1[1] * b.line_2[0]) + (a.line_1[2] * b.line_3[0]);
	final.line_1[1] = (a.line_1[0] * b.line_1[1]) + (a.line_1[1] * b.line_2[1]) + (a.line_1[2] * b.line_3[1]);
	final.line_1[2] = (a.line_1[0] * b.line_1[2]) + (a.line_1[1] * b.line_2[2]) + (a.line_1[2] * b.line_3[2]);
	
	final.line_2[0] = (a.line_2[0] * b.line_1[0]) + (a.line_2[1] * b.line_2[0]) + (a.line_2[2] * b.line_3[0]);
	final.line_2[1] = (a.line_2[0] * b.line_1[1]) + (a.line_2[1] * b.line_2[1]) + (a.line_2[2] * b.line_3[1]);
	final.line_2[2] = (a.line_2[0] * b.line_1[2]) + (a.line_2[1] * b.line_2[2]) + (a.line_2[2] * b.line_3[2]);
	
	final.line_3[0] = (a.line_3[0] * b.line_1[0]) + (a.line_3[1] * b.line_2[0]) + (a.line_3[2] * b.line_3[0]);
	final.line_3[1] = (a.line_3[0] * b.line_1[1]) + (a.line_3[1] * b.line_2[1]) + (a.line_3[2] * b.line_3[1]);
	final.line_3[2] = (a.line_3[0] * b.line_1[2]) + (a.line_3[1] * b.line_2[2]) + (a.line_3[2] * b.line_3[2]);
	
	printf("Le produit des deux matrices donne la matrice suivante > \n");
	
	printf("%d %d %d\n",final.line_1[0],final.line_1[1],final.line_1[2]);
	printf("%d %d %d\n",final.line_2[0],final.line_2[1],final.line_2[2]);
	printf("%d %d %d\n",final.line_3[0],final.line_3[1],final.line_3[2]);
	
	
}

void init(matrice *model){
	
	int filler = 0;
	
	for( filler =0 ; filler < 3 ; filler++ ){
		model->line_1[filler] = (const){0};
		model->line_2[filler] = (const){0};
		model->line_3[filler] = (const){0};
	}
	
}


