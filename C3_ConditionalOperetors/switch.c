/* SWITCH:
            switch(expression) //expression=int/char
            {
                case c1:
                code;
                break;
                                //c1,c2,c3..cn= constant
                case c2:
                code;
                break;
                .
                .
                . n case..
                
                default:
                code;
            }

*/

#include <stdio.h>

int main()
{
    int day;

    printf("Enter the day of week:");
    scanf("%d",&day);
    
    switch(day){
        case 1: printf("Monday\n");
            break;
        case 2: printf("Tuesday\n");
            break;
        case 3: printf("Wednsday\n");
            break;
        case 4: printf("Thursday\n");
            break;
        case 5: printf("Friday\n");
            break;
        case 6: printf("Saturday\n");
            break;
        case 7: printf("Sunday\n");
            break;
        default: printf("Invalid day, please enter no. b/w 1 to 7...\n");
            break;
    }
    return 0;
}
