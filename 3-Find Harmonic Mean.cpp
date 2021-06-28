#include<stdio.h>
int main(){
	int size,i;
	float harmonic,mean=0;
	printf("Enter the number of elements for Harmonic mean : ");
	scanf("%d",&size);
	
	printf("Enter the elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%f",&harmonic);
		mean=mean+(1/harmonic);
	}
	printf("\n\n\n\nEnter harmonic Sum is : %f",mean);	
	mean=size/mean;
	
	printf("\n\n\n\nEnter harmonic mean is : %f",mean);
	return 0;
}
