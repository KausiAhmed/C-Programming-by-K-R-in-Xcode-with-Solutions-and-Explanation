//
//  main.c
//  1.11
//
//  Created by Kausi Ahmed on 7/7/14.
//
//

/*
Excerise 1-11: How would you test the word count program?  What kinds of input are most likely to uncover bugs if there are any?

Sample Output: 
 
 The following punctuations are not words: , ! / : " ' Yet they are counted as words
 
 NewLines: 1  |   New Words: 18   |  NewCharacters: 84
 
 */


#include <stdio.h>
#define IN 1
#define OUT 0


int main(int argc, const char * argv[])
{

    int c, nl, nw, nc, state;
    
    state = OUT;
    
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n') ++nl;
        if (c == ' ' || c == '\n' || c == '\t') state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
        
    }
    printf("\nNewLines: %d  |   New Words: %d   |  NewCharacters: %d\n\n\n", nl, nw, nc);
    return 0;
}

