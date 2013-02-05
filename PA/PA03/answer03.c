/*
 * Please fill the functions in this file.
 * You can add additional functions. 
 *
 * Hint: It is very likely that you need to write additonal functions.
 */

#include "pa03.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * Hint: You may create additional arrays if needed.
 * The maximum size needed is specified by MAXLENGTH in pa03.h.
 */
void partitionrecursion(int budget, int pos, int* data);
void partition(int value)
{
  printf("partition %d\n", value);
  int data[MAXLENGTH];
  partitionrecursion(value, 0, data);
}

void partitionrecursion(int budget,int pos,int* data){
if (budget==0){
int i;
	for ( i=0; i<pos;pos++)
		{
			printf("%c ", data[i]);
		}
	printf("\n");
	return;
}


int spending;
for (spending=1; spending<-budget; spending++)
{
data[pos]=spending;
partitionrecursion(budget-spending,pos+1,data);

}


}
/*
 * =================================================================
 */

void subset(char * charset, int length)
{
  printf("subset of ");
}
/*
 * =================================================================
 */
void permute(char * charset, int length)
{
  printf("permute ");
}

