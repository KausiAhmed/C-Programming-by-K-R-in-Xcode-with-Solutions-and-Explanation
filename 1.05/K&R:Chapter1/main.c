//
//  main.c
//  K&R:Chapter1
//
//  Created by Kausi Ahmed on 7/5/14.
//  Copyright (c) 2014 Time Based Software, LLC. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    for (float fahr = 300; fahr>=0; fahr = fahr - 20)
    {
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }

    
    return 0;
}

