// return the string writter b/w two html tags and remove extra spaces from start and end.

// input: <html>    Hello C!    </html>
// output: Hello C!

#include <stdio.h>
#include <string.h>

void HtmlParser(char *s)
{
    int sIdx = 0;
    int inside = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '<')
        {
            inside++;
            continue;
        }
        else if (s[i] == '>')
        {
            inside = 0;
            continue;
        }
        if (inside == 0)
        {
            s[sIdx++] = s[i];
        }
    }
    s[sIdx] = '\0';

    while (s[0] == ' ')
    {
        for (int i = 0; i < strlen(s); i++)
        {
            s[i] = s[i + 1];
        }
    }
    while (s[strlen(s) - 1] == ' ')
    {
        s[strlen(s) - 1] = '\0';
    }
}

int main()
{
    char s[] = "<html>    Hello C!    </html>";
    HtmlParser(s);
    printf("\"%s\"", s);
    return 0;
}