#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n"); /* Variable called name asks the user to input their name and saves it */
    printf("hello, %s\n", name);                      /* prints hello with the stored varibale */
}
