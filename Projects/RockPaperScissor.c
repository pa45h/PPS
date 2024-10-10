// Create Rock, Paper & Scissors Game

// Player 1: rock
// Player 2 (computer): scissors -- > player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins

// Write a C program to allow user to play this game three times with computer.
// Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int RandomNo()
{
    return (rand() % 3);
}

int Winner(char p1)
{
    int p2 = RandomNo();

    if (toupper(p1) == 'R' && p2 == 0) // rock(r) + rock(0) --> Tie
    {
        printf("\nComputer: Rock\n");
        return -1;
    }
    else if (toupper(p1) == 'R' && p2 == 1) // rock(r) + paper(1) --> paper
    {
        printf("\nComputer: Paper\n");
        return 0;
    }
    else if (toupper(p1) == 'R' && p2 == 2) // rock(r) + scissor(2) --> rock
    {
        printf("\nComputer: Scissor\n");
        return 1;
    }
    else if (toupper(p1) == 'P' && p2 == 0) // paper(p) + rock(o) --> paper
    {
        printf("\nComputer: Rock\n");
        return 1;
    }
    else if (toupper(p1) == 'P' && p2 == 1) // paper(p) + paper(1) --> tie
    {
        printf("\nComputer: Paper\n");
        return -1;
    }
    else if (toupper(p1) == 'P' && p2 == 2) // paper(p) + scissor(2) --> scissor
    {
        printf("\nComputer: Scissor\n");
        return 0;
    }
    else if (toupper(p1) == 'S' && p2 == 0) // scissor(s) + rock(o) --> rock
    {
        printf("\nComputer: Rock\n");
        return 0;
    }
    else if (toupper(p1) == 'S' && p2 == 1) // scissor(s) + paper(1) --> scissor
    {
        printf("\nComputer: Paper\n");
        return 1;
    }
    else if (toupper(p1) == 'S' && p2 == 2) // scissor(s) + scissor(2) --> tie
    {
        printf("\nComputer: Scissor\n");
        return -1;
    }
}

int main()
{
    char name[25];
    char ch, c;

    srand(time(NULL));

    printf("\n\n======= Rock, Paper and Scissor =======\n\n");

    printf("\nEnter your name:");
    gets(name);
again:
    while (1)
    {
        int p1 = 0, p2 = 0;

        printf("\nHello %s,", name);

        for (int i = 0; i < 3; i++)
        {
        tie:

            printf("\nEnter your choice (R,P,S) : ");
            scanf(" %c", &ch);

            int winner = Winner(ch);
            
            if (winner == 0)
            {
                printf("\nYou Loose!\n");
                p2++;
            }
            else if (winner == 1)
            {
                printf("\nYou Won!\n");
                p1++;
            }
            else if (winner == -1)
            {
                printf("\nTie! Again...\n");
                goto tie;
            }
        }

        if (p1 > p2)
        {
            printf("\nCongats %s !! You Won !!\n", name);
        }
        else
        {
            printf("\nOops !! You Lost !!\n");
        }
        printf("\nDo you want to play again (y/n) ? ");
        scanf(" %c", &c);

        if (toupper(c) == 'Y')
        {
            goto again;
        }
        else
            break;
    }
    return 0;
}