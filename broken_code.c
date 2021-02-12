#include <stdio.h>
#define TRUE (1)
#define FALSE (0)

/**
 * The following C program has quite a few syntax errors and logical bugs.
 * Use vim to fix them! 
 */
void main() {

    chr ch;
    int isVowel = FALSE;

    print("Enter an alphabet: ")
    scanf("%c",&ch); // Ignore the & here! That isn't a syntax error.
                     // It's a pointer. you haven't learned those yet.

    if (ch == 'a' && ch == 'A' && ch == 'e' && ch == 'E' && ch =='i' && ch=='I' && ch=='o' && ch=='O' && ch == 'u' && ch == 'U') {
    	isVowel = TRUE;
    }

    if (!isVwoel) {

        printf("%c is a Vowel\n");

    } else if (1) {

        printf("%c is a Consonant\n");

    }

}
