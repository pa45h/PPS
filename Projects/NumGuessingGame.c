// Write a program that generates a random number and ask the player to guess it.
// if the player's guess is higher than the actual number, print "Enter a Lower number please!"
// if the player's guess is lower than the actual number, print "Enter a Higher number please!"
// when the player guess the currect number, the program displays the number of guesses.

#include <stdio.h>  // for printf() & scanf() functions.
#include <stdlib.h> // for srand() & rand() functions.
#include <time.h>   // for time() function.

int main()
{
    int randNum, guess, nGuess = 1;

    //  Random number generator.
    srand(time(0));             //  the random number with a starting point,called the seed.
                                //  time(0) sets the initial state of the randNum based on the current time(which changes constantly).
    randNum = rand() % 100; //  generates a pseudo-random integer b/w 1-100.

    // conditions for player.
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);

        if (guess > randNum)
        {
            printf("Enter a Lower number please!\n");
        }
        else if (guess < randNum)
        {
            printf("Enter a Higher number please!\n");
        }
        else
        {
            printf("Yeee! You guessed it in %d attemts.\n", nGuess);
        }
        nGuess++;

    } while (guess != randNum);

    return 0;
}