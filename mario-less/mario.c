#include <cs50.h>
#include <stdio.h>

int main(void)
{
//Prompt user for name
string name = get_string("Hi, what is your name? ");
printf("Hello, %s\n", name);

//Prompt user for height
    int n;
do
    {
        n = get_int("Between 1 to 8, how height do you want the pyramide to be ? ");
    }
    while (n>8 || n<0);

//For each row
for(int i = 1; i <= n; i++)
   {
    //For each column
        for(int j = 1; j <= n; j++)

        //For hash location
            if(j >= n-(i - 1) && i <= n)
            {
             //Print a pyramide
            printf("#");
            }
            else
            {
                printf(" ");
            }
        //Move to next row
        printf("\n");
    }
}
