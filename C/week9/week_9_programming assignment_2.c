//Write a C program to search a given element from a 1D array and display the position at which it is found by using linear search function. The index location starts from 1.

#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
   int array[100], search, c, n, position;
   /* search - element to search, c - counter, n - number of elements in array,
   position - The position in which the element is first found in the list. */

    scanf("%d", &n); // Number of elements in the array is read from the test case data

    for (c = 0; c < n; c++)
    scanf("%d", &array[c]); //Elements of array is read from the test data

    scanf("%d", &search);  //Element to search is read from the test case data

   /* Use the following in the printf statement to print the output
   printf("%d is not present in the array.", search);
   printf("%d is present at location %d.", search, position+1); //As array[0] has the position 1
   */
	int f=0;
	for(c=0;c<n;c++)
    {
      if(search==array[c])
      {
        printf("%d is present at location %d.", search, c+1);
        f=1;
        break;
      }
    }
if(f==0)
        printf("%d is not present in the array.", search);
}
