//
//  main.c
//  1.09
//
//  Created by Kausi Ahmed on 7/5/14.
//
//

/*
 
 Excerise 1-9: Write a a program to copy its input and its output, replacing each string of one or more blanks
               by a single blank.
 Sample Output: Please type a sentence with multiple spaces between the words and hit 'Enter' when complete.
 
                Three spaces now:    followed by six spaces and a period:      .
                Three spaces now: followed by six spaces and a period: .
 
 Explanation: See the comments in the code
 */

#include <stdio.h>
#define BLANK ' '  //We define BLANK as an empty space


int main(int argc, const char * argv[])
{
    
    int c;
    int isWhiteSpace = 0;
    printf("Please type a sentence with multiple spaces between the words and hit 'Enter' when complete.\n\n");
    while((c = getchar()) != EOF)
    {
        if(c == BLANK)
        {
            //skip the following condition if 'isWhiteSpace' is already 1.  Meaning if Blank was followed by
            //another Blank, the first Blank would set 'isWhiteSpace' to 1.  Any following 'BLANKS' will be ignored.
            if(isWhiteSpace == 0)
            {
                //If the last Character was not BLANK, then isWhiteSpace was reset to 0 (next condition)
                // This loop was executed setting white
                isWhiteSpace = 1;
                putchar(c);
            }
            //If the loop above is skipped, there is nothing the system is required to do
            //Thus, we exit the loop and continue to exectue the program.
        }
        
        if(c != BLANK)
        {
            //Reset 'isWhiteSpace' to 0 when a character is encountered.
            isWhiteSpace = 0;
            putchar(c);
        }
    }
    
    return 0;
}
