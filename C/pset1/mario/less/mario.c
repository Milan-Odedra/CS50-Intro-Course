# include <stdio.h>
# include <cs50.h>

int main (void)
{
    int height, row, column, space;   /* int datatype to store variables */
    do
    {

    height = get_int ("Enter a height: ");  /* Prompts the user to enter a height */ 
    }
    while (height < 1 || height > 8);       /* while loop to keep prompting user to enter a vaild height */

    for (row = 0; row < height; row++)      /* sets row to 0 and when row is less than height prints 1 row */
    {
        for (space = 0; space < height - row - 1; space++)    /* add spaces to right allign the column */
        {
            printf(" ");                                      /* prints spaces with the formula */
        }

        for (column = 0; column <= row; column++)             /* when column is <= row print # */
        {
            printf("#");                         
        }
        printf("\n");            /* prints new line */
    }
}
