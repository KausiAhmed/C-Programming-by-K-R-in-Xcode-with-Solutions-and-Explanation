//
//  main.c
//  1.06
//
//  Created by Kausi Ahmed on 7/5/14.
//
//

#include <stdio.h>

/*
 
    Excerise 1-6: Verify that the expression getChar() !=EOF is 0 or 1
    Output: Expression getChar()!=EOF evaluates to: 1
 
    Explanation: getChar() will read a character and compare with EOF.  The result is 1 if True, or 0 if false.
 
*/

int main(int argc, const char * argv[])
{
    printf("Press the ENTER key");
    printf("Expression getChar()!=EOF evaluates to: %d\n\n", getchar()!=EOF);
    return 0;
}

