//
//  main.c
//  1.07
//
//  Created by Kausi Ahmed on 7/5/14.
//
//

#include <stdio.h>
/*
 
 Excerise 1-7: Write a a program to print the value of EOF
 Output: The value of EOF is: -1
 
 Explanation: EOF is a negative integer constant that indicates the end of a stream.
              Based on the complier being used, EOF with type 'int' is negative, but is very commonly -1.
 
 */

int main(int argc, const char * argv[])
{
    printf("The value of EOF is: %d\n\n", EOF);

    return 0;
}


