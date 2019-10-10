#include <stdio.h>
#include <string.h>

void removeLastCharacter(char* message);

int main ()
{
    char message[100];

    printf("Enter your message:\n");
    fgets(message,100,stdin);

    removeLastCharacter(message);

    printf("Your message without last character:\n%s\n", message );

    return 0;
}

void removeLastCharacter(char* message)
{
    int messageLength = strlen(message);
    message[messageLength-2] = '\0';

}
