//The length of three sides are taken as input. Write a C program to find whether a triangle can be formed or not. If not display “This Triangle is NOT possible.” If the triangle can be formed then check whether the triangle formed is equilateral, isosceles, scalene or a right-angled triangle. (If it is a right-angled triangle then only print Right-angle triangle do not print it as Scalene Triangle).

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c); /*The length of three sides are entered from the test cases */

/* Complete the program. Copy and paste from the printf statements mentioned below wherever required for printing the outputs

printf("Triangle is not possible");
printf("Right-angle Triangle");
printf("Isosceles Triangle");
printf("Equilateral Triangle");
printf("Scalene Triangle");

*/


    if (!(a + b > c && a + c > b && b + c > a)) {
        printf("Triangle is not possible");
	}


     else if (a == b && b == c) {
            printf("Equilateral Triangle");
        } else if (a == b || a == c || b == c) {
            printf("Isosceles Triangle");
        } else if (a*a + b*b == c*c ||
                   a*a + c*c == b*b ||
                   b*b + c*c == a*a) {
            printf("Right-angle Triangle");
        } else {
            printf("Scalene Triangle");
        }
 }
