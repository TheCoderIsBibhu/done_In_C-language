#include <stdio.h>
int transpose(){
	int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}
 int multiplication(){
	int c, d, p, q, m, n, k, tot = 0;
  int fst[10][10], sec[10][10], mul[10][10];

  printf(" Please insert the number of rows and columns for first matrix \n ");
  scanf("%d%d", &m, &n);

  printf(" Insert your matrix elements : \n ");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &fst[c][d]);
 
  printf(" Please insert the number of rows and columns for second matrix\n");
  scanf(" %d %d", &p, &q);

  if (n != p)
    printf(" Your given matrices cannot be multiplied with each other. \n ");
  else
  {
    printf(" Insert your elements for second matrix \n ");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &sec[c][d] );

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          tot = tot + fst[c][k] * sec[k][d];
        }
        mul[c][d] = tot;
        tot = 0;
      }
    }
 
    printf(" The result of matrix multiplication or product of the matrices is: \n "); 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d \t", mul[c][d] );
      printf(" \n ");
    }
  }
  return 0;
 }
int main(){
	int a ;
	printf("1. Transpose of a matrix\n");
	printf("2. Multiplication of a matrix");
	printf("\n\n\n\nEnter your choice : ");
	scanf("%d",&a);
	switch(a){
		case 1:
			transpose();
			break;
		case 2: 
			multiplication();
			break;
		default: 
			printf("Enter a valid choice");
			break;
	}
}
