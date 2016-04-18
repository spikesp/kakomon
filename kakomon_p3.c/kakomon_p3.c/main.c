//
//  main.c
//  kakomon_p3.c
//
//  Created by spike on 16/4/18.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
int simple_match(char *text, char *pattern)
{
    int i = 0, j = 0;
    while (text[i] != '\0'){
        if (text[i] != pattern[j]){
            i++;
            j = 0;
        } else if (pattern[j + 1] == '\0')
            return i - j;
        else
            i++, j++;
    }
    return -1;
};

int main(int argc, const char * argv[]) {
    
    char text[100] = "hello,world!";
    char pattern[6] = "world";
    
    printf("The pisition is %d.\n",simple_match(text, pattern));
    
   
    return 0;
}
