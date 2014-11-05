//
//  main.c
//  1.12
//
//  Created by Kausi Ahmed on 10/28/14.
//  Copyright (c) 2014 TBS. All rights reserved.
//

/*
 Excerise 1-12: Write a program that prints its input one word per line.
 
 Sample Input:     
    This is a new		word
 
 Sample Output:
 
    This
    is
    a
    new
    word
 */


#include <stdio.h>

#define OUT  0
#define IN  1

int main(int argc, const char * argv[]) {

    int state;
    char c;
    state = OUT;
    
    while ((c = getchar())!=EOF)
    {
        if ((c == '\t') || (c == ' ') || (c == '\n')) state = OUT;
        else
        {
            if (state == OUT)
            {
                putchar('\n');
            }
            putchar(c);
            state = IN;
        }
    
        
    }
    
}
