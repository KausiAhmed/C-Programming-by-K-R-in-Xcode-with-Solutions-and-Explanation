//
//  main.c
//  1.09
//
//  Created by Kausi Ahmed on 7/5/14.
//
//

/*
 
 Excerise 1-10: Write a a program to copy its input and its output, replacing each tab by \t, each backspace by \b, and each backslah by \\.  This makes tabs and backspces visibile in an unambiguous way.
 
 Sample Output: Please type a sentence with multiple tabs, backspaces, and backslashes between the words and hit 'Enter'
                when complete.
 
 Three spaces now:    followed by six spaces and a period:      .
 Three spaces now: followed by six spaces and a period: .
 
 Explanation: See the comments in the code
 */

#include <stdio.h>
#define BLANK ' '  //We define BLANK as an empty space


int main(int argc, const char * argv[])
{
    
    int c;
    int isBackSpace = 127;
    int isDelete = 8;
    int isBackSlash = '\\';
    int tab = '\t';
    printf("Please type a sentence with multiple tabs, backspaces between the words and hit 'Enter' when complete.\n\n");
    while((c = getchar()) != EOF)
    {
        if (c == isBackSpace)
        {
            putchar('\b');
        }
        else if ( c == isDelete)
        {
            putchar('\b');
        }
        else if (c==isBackSlash)
        {
            putchar('\');
        }
        else if (c==tab)
        {
            putchar('\t');
        }
        else (putchar(c));
    }
    
    return 0;
}