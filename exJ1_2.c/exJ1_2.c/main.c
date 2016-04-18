//
//  main.c
//  exJ1_2.c
//
//  Created by spike on 16/4/12.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define MAXLEN 80
#define MAXWORD 100

struct word {
    char data[MAXLEN];
    int len;
    int freq;
};

struct word wtab[MAXWORD];

struct word *is_dup(char *cp){
    struct word *wp;
    
    for (wp = wtab; wp->freq > 0; wp++)
        if (strcmp(wp,cp) == 0)
            return wp;
    return 0;
}


int main(int argc, const char * argv[]) {
    
    struct word *wp, *tp;
    char buf[MAXLEN];
    int i;
    
    for (wp = wtab; wp!='\0'; wp++)
        wp->freq = 0;
    
    wp = wtab;
    
    while (scanf("%s", buf) != EOF && wp < &wtab[MAXWORD-1]){
        if (tp == is_dup(buf)){
            tp->freq++;
            continue;
        }
            strcpy(wp->data,tp->data);
            wp->len = strlen(buf);
            wp->freq = 1;
            
            ;
            
    }
            printf("No. Len Freq\n");
            for (i = 0, wp = wtab; wp->freq > 0; i++, wp++)
            printf("%3d %3d %d: %s\n", i, wp->len, wp->freq, wp->data);
    return 0;
}
