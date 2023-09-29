//Write a C program to print Largest and Smallest Word from a given sentence. If there are two or more words of same length, then the first one is considered. A single letter in the sentence is also consider as a word.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0};
//str[100] is for storing the sentence and substr[50][50] is for storing each word.

scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

/* Complete the program to get the desired output.
The print statement should be as below

printf("Largest Word is: %s\nSmallest word is: %s\n", -------,--------);


*/
    int r=0,c,largest=0,smallest=0,length,l=0,s=0;
    for(int i=0;i<strlen(str);i++)
    {
        c=0;

        while(str[i]!=' ' && str[i]!='.')
        {
            substr[r][c++]=str[i++];
        }
        substr[r][c]='\0';
        length=strlen(substr[r]);
        if(r==0)
        {
            largest=smallest=length;
        }
        else{
            if(length>largest)
            {
                largest=length;l=r;
            }
            else if(length<smallest)
            {
                smallest=length;s=r;
            }
        }

        r++;

    }

    printf("Largest Word is: %s\nSmallest word is: %s\n",substr[l],substr[s]);

}
