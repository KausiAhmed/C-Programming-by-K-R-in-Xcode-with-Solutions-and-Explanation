//
//  main.c
//  1.08
//
//  Created by Kausi Ahmed on 7/5/14.
//
//

#include <stdio.h>

/*
 
 Excerise 1-8: Write a a program to count blanks, tabs, and newlines.
 Sample Output: Please type a paragraph and press and hold Control+D to get the Output:
        This is a new
        paragraph
        that I am typing
        in the Console
 
        Blanks: 8
        Tabs: 0
        New Lines: 3
        Program ended with exit code: 0
 
 Explanation: We initialize all the variables to 0.  We prompt the User to provide us a stream.  
              Next, until the program reaches EOF, it reads each character and looks for blank space, a tab, or new line character.
              When any of the conditions are met, corresponding variable is incremented by 1.
              "if/else" approch is faster than only "if" as it exits the loop after a condition is met.
              If all the conditions were "if" statements, then every condition would be checked, even if a condition had met earlier.
 */

int main(int argc, const char * argv[])
{

    int blanks, tabs, newLines, c = 0;
    printf("Please type a paragraph and press and hold Control+D to get the Output:\n");
    while ((c=getchar())!=EOF)
    {
        if (c==' ')
        {
            ++blanks;
        }
        else if (c=='\t')
        {
            ++tabs;
        }
        else if (c=='\n')
        {
            ++newLines;
        }
        
    }
    printf("\n\nBlanks: %i\nTabs: %i\nNew Lines: %i\n", blanks, tabs, newLines);
    
    return 0;
}


