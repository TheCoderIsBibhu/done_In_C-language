 #include <stdio.h>
int main()
{
    int a[1000],i,n,min,max;
   	int countMin=0,countMax=0;
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
    
    printf("minimum of array is : %d",min);
    printf("\nmaximum of array is : %d",max);
    
    for(i=0; i<n; i++){
    	
    	if(max==a[i])
    		countMax++;
    	if(min==a[i])
    		countMin++;
	}
 	
 	printf("\n\n\n\n The occurance of %d is %dtimes",min,countMin);
 	printf("\n The occurance of %d is %dtimes",max,countMax);
 	
 
    return 0;
}
