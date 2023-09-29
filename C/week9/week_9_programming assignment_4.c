//Write a C program to reverse an array by swapping the elements and without using any new array.

#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); // n is number of elements in the array.
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
int l=0,r=n-1;
while(l<r)
{
  int t=array[l];
  array[l]=array[r];
  array[r]=t;
  l++;r--;
}
printf("Reversed array elements are:\n");

  for (c = 0; c < n; c++) {
    printf("%d\n", array[c]);
  }
  return 0;
}
