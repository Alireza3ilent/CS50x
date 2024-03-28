This program prompts the user to input their name and then greets them with a personalized message.

```c
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for their name
    string name = get_string("What's your name?\n");

    // Print greeting with user's name
    printf("\nHello, %s!\n", name);
}
```