// You have to fill in values to a template Bill.txt

// Bill.txt looks something like this:
// Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}. Please visit our outlet {{outlet}} for any kind of problems. We plan to serve you again soon.

// You have to read this file and replace these values:
// {{name}}   - Parth
// {{item}}   - Dell Laptop
// {{outlet}} - Laptop Wallah

// Use file functions in c to accomplish the same

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ReplaceWord(char *str, char *oldWord, char *newWord)
{
    char *resultStr;
    int i, count = 0;
    int oldWordLen = strlen(oldWord);
    int newWordLen = strlen(newWord);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i += oldWordLen - 1;
        }
    }
    resultStr = (char *)malloc(i + count * (newWordLen - oldWordLen) + 1);

    i = 0;
    while (*str)
    {
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultStr[i], newWord);
            i += newWordLen;
            str += oldWordLen;
        }
        else
        {
            resultStr[i++] = *str++;
        }
    }
    resultStr[i] = '\0';

    return resultStr;
}

int main()
{
    FILE *ptr1 = fopen("Bill.txt", "r");
    FILE *ptr2 = fopen("GenBill.txt", "w");

    char str[500];
    fgets(str, 500, ptr1);
    printf("\n\nTemplate: %s", str);

    char *newStr;
    newStr = ReplaceWord(str, "{{name}}", "Parth");
    newStr = ReplaceWord(newStr, "{{item}}", "Dell laptop");
    newStr = ReplaceWord(newStr, "{{outlet}}", "Laptop Wallah");

    printf("\n\nGenerated: %s", newStr);

    fprintf(ptr2, "%s", newStr);

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}