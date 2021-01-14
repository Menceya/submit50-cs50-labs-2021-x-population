#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt the user for the hight of the ladder
    int h;
    do
    {
        h = get_int("height: ");
    }
    while (h > 8 || h < 1);

    //Print the ladder right facing
    int count = 0;
    do
    {
        // loop that writes the empty spaces
       for (int i = 0; i < h - count; i++)
       {
	      printf(" ");
       }
       // loop that writes the hash's
       for (int j = 0; j < count; j++)
       {
	     printf("#");
       }
       printf("\n");
       count++;
    }
    while (count < h + 1);

}

