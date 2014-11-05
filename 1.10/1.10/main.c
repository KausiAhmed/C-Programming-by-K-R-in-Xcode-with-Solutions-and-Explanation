//
//  main.c
//  1.09
//
//  Created by Kausi Ahmed on 7/5/14.
//
//

/*
 
 Excerise 1-10: Write a a program to copy its input and its output, replacing each tab by \t, each backspace by \b, and each backslah by \\.  This makes tabs and backspces visibile in an unambiguous way.
 
 WARNING:  XCODE DOES NOT ALLOW DETECTION OF BACKSPACE OR DELETE KEY
 
 Sample Output: Type a sentence with multiple tabs, backspaces between the words and hit 'Enter' when complete.
 
                Xcode cannot detect 'Backspace' or 'Delete' key but you can test for tab 3 tabs here:			 and three backslahes: \\\
                Xcode cannot detect 'Backspace' or 'Delete' key but you can test for tab 3 tabs here:\t\t\t and three backslahes: \\\\\\
 
 Explanation: See the comments in the code
 */

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int c;
    int isBackSpace = '\b';
    int isDelete = '\b';
    int isBackSlash = '\\';
    int tab = '\t';
    
    printf("Type a sentence with multiple tabs, backspaces between the words and hit 'Enter' when complete.\n\n");
    while((c = getchar()) != EOF)
    {
        // Set/Reset the flag 'printAsIs' to 1 (or YES) to print the character as typed.
        int printAsIs = 1;
        
        // Test each character to match its condition.  If matched, set the flag 'printAsIs' to 0
        // To putChar a backslash '\', you have to putChar('\\') and to put a character after the slash, you have to do another putChar statement with that character.
        if (c == isBackSpace)
        {
            putchar('\\');
            putchar('b');
            printAsIs = 0;
        }
        if ( c == isDelete)
        {
            putchar('\\');
            putchar('b');
            printAsIs = 0;
        }
        if (c==isBackSlash)
        {
            putchar('\\');
            putchar('\\');
            printAsIs = 0;
        }
        if (c==tab)
        {
            putchar('\\');
            putchar('t');
            printAsIs = 0;
        }
        
        //If all the coniditons fail then 'printAsIs' remains 1 (or YES) and the input is printed as is.
        if (printAsIs)
        {
            (putchar(c));
        }
    }
    
    return 0;
}