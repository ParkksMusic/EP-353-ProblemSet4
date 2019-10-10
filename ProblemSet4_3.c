#include <stdio.h>

int main () {
    FILE *fp;
    char str[2000], ch;
    int i, frequency = 0;

    fp = fopen("LoremIpsum.txt" , "r");
    puts(str);

    printf("Enter a character to find the frequency:\n)");
    scanf("%c",&ch);

    for(i = 0; str[i] != '\0'; ++i)
    {
        if(ch == str[i])
            ++frequency;
    }
    printf("Frequency of %c = %d", ch, frequency);

    fclose(fp);

return (0);
}