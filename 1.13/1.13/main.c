//
//  main.c
//  1.13
//
//  Created by Kausi Ahmed on 10/28/14.
//  Copyright (c) 2014 TBS. All rights reserved.
//

#include <stdio.h>
#define MAXLN 10

int main(void)
{
    int c;
    int inspace = 0;
    long lengtharr[MAXLN + 1];
    int wordlen = 0;
    
    int firstletter = 1;
    long value = 0;
    long maxval = 0;
    int index = 0;
    int done = 0;
    
    for(index = 0; index <= MAXLN; index++)
    {
        lengtharr[index] = 0;
    }
    
    while(done == 0)
    {
        c = getchar();
        
        if(c == ' ' || c == '\t' || c == '\n' || c == EOF)
        {
            if(inspace == 0)
            {
                firstletter = 0;
                inspace = 1;
                
                if(wordlen <= MAXLN)
                {
                    if(wordlen > 0)
                    {
                        value = ++lengtharr[wordlen - 1];
                        if(value > maxval)
                        {
                            maxval = value;
                        }
                    }
                }
                else
                {
                    value = ++lengtharr[MAXLN];
                    if(value > maxval)
                    {
                        maxval = value;
                    }
                }
            }
            if(c == EOF)
            {
                done = 1;
            }
        }
        else
        {
            if(inspace == 1 || firstletter == 1)
            {
                wordlen = 0;
                firstletter = 0;
                inspace = 0;
            }
            ++wordlen;
        }
    }
    
    for(value = maxval; value > 0; value--)
    {
        printf("%4ld  | ", value);
        for(index = 0; index <= MAXLN; index++)
        {
            if(lengtharr[index] >= value)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("      +");
    for(index = 0; index <= MAXLN; index++)
    {
        printf("---");
    }
    printf("\n       ");
    for(index = 0; index < MAXLN; index++)
    {
        printf("%2d ", index + 1);
    }
    printf(">%d\n", MAXLN);
    
    return 0;
}