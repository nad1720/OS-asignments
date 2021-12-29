
#include <stdio.h>
#include <stdlib.h>
#include<pthread.h>
int main(void) {

	int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
	printf("\n Enter the size of matrix1 : \n");
	scanf("%d",&r1);
	scanf("%d",&c1);
	printf("\n Enter the size of matrix2 :\n");
		scanf("%d",&r2);
		scanf("%d",&c2);
		printf("\n Enter the elements of matrix1 : \n");
		for(int i=0;i<r1;i++){
			for(int j=0;j<c2;j++){
				scanf("%d",&first[i][j]);
			}
		}
		printf("\n Enter the elements of matrix2 : ");
		for(int i=0;i<r2;i++){
			for(int j=0;j<c2;j++){
				scanf("%d",&second[i][j]);
			}
		}

		 for(int i=0;i<r1;i++){
			for(int j=0;j<c2;j++){
			   for(int k=0;k<c1;k++){
				   result[i][j]=first[i][k]*second[k][j];
			   }
			}
		}
				printf("\n the elements of matrix2 : \n");
				for(int i=0;i<r1;i++){
					for(int j=0;j<c2;j++){
						printf("%d",result[i][j]);
					}
					printf("\n");
				}
}
