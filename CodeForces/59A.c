#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 1000

int main()
{
    // Declare an array to store characters with a maximum size of MAX_SIZE
    char a[MAX_SIZE];
    // Declare variables to count lowercase (l) and uppercase (u) characters
    int l = 0, u = 0;

    // Read input string from the user
    scanf("%s", a);

    // Loop through each character in the string
    for (int i = 0; i < strlen(a); i++)
    {
        // Check if the current character is lowercase
        if (islower(a[i]))
        {
            l++; // Increment the lowercase count
        }
        else
        {
            u++; // Increment the uppercase count
        }
    }

    // Check if the number of lowercase characters is greater than or equal to uppercase
    if (l >= u)
    {
        // Convert all characters in the string to lowercase
        for (int i = 0; i < strlen(a); i++)
        {
            a[i] = tolower(a[i]);
        }
        // Print the modified string in lowercase
        printf("%s\n", a);
    }
    else
    {
        // Convert all characters in the string to uppercase
        for (int i = 0; i < strlen(a); i++)
        {
            a[i] = toupper(a[i]);
        }
        // Print the modified string in uppercase
        printf("%s\n", a);
    }

    // Return 0 to indicate successful completion
    return 0;
}
