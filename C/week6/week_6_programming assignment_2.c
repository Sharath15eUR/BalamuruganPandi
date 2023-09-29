//Write a C Program to print the array elements in reverse order

#include<stdio.h>

int main() {
   int arr[20], i, n;

   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++)
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
  i=0;
int j=n-1;
 while(i<j)
 {
   int t=arr[i];
   arr[i]=arr[j];
   arr[j]=t;
   i++;j--;
 }

 for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements
   }

   return (0);
}

