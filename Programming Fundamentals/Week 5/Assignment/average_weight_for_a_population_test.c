/*  Compute the average weight for a population of elephant seals read into an array
    by Isabel Lacerda
    Nov. 18, 2021 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *ifp;
	
	//Reading the data  
	ifp = fopen("elephant_seal_data.txt","r");
	
	if (ifp == NULL) {
		fprintf(stderr, "Can't open input file in.list!\n");
		exit(1);
	} 
	
	//Initialize the variables
	int weight, weights[10000];
	int i=0;
	while (fscanf(ifp, "%d\t",&weights[i]) != EOF){
		printf("%d\n",weights[i]);
		i++;
	} 
	
	fclose(ifp);
	
	//Counting the average
	double sum = 0.0;
	const size = 10000;

	for (i; i < size; i++) {
		sum += weights[i];
	}

	printf("\n\n");
	printf("The average weight for a population of elephant seals is %.2f\n", sum/size);

	return 0;
} 