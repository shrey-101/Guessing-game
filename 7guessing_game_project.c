#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, c = 1;
    char ch;

    printf("\n \nWELCOME TO THE GUESSING GAME \n");
    printf("\n \n ");
    printf("Instructions : The system is going to generate a number and the player has to guess it \n Your prediction skill will be tested on the number of times you take to guess the number. ") >
        printf("\n \n ");
    printf("Are you ready to begin?\n Press 'Y' or 'N'\n");
    scanf("%c", &ch);
    if (ch == 'Y' || ch == 'y')
    {
        printf("\nYour number is genrated\n");
    }
    else if (ch == 'N' || ch == 'n')
    {
        printf("OK\n");
        exit(0);
    }
    else
    {
        printf("Invalid input \n");
        exit(0);
    }
    srand(time(0));
    num = rand() % 100 + 1;
    printf("\n");

    printf("Now guess a number between 1 to 100\n");
    scanf("%d", &guess);
    if (guess > 0 && guess <= 100)
    {
        do
        {

            if (num == guess)
            {
                c++;
                break;
            }
            else if (num >= guess)
            {
                printf("guess a higher number\n");
                scanf("%d", &guess);
                if (guess > 0 && guess <= 100)
                {
                    c++;
                    continue;
                }

                break;
            }
            else if (num <= guess)
            {
                printf("guess a lower number\n");
                scanf("%d", &guess);
                if (guess > 0 && guess <= 100)
                {
                    c++;
                    continue;
                }

                break;
            }

        } while (num != guess);
    }
    if (c > 1)
    {
        printf("Congratulations you've guessed the right number in %d times\n", c);
    }
    else
    {
        printf("Invalid input ");
    }

    return 0;
}