//
//  main.c
//  ex_J1.c
//
//  Created by spike on 16/4/11.
//  Copyright © 2016年 ___spike___. All rights reserved.
//

#include <stdio.h>
int coins[] = {500, 100, 50, 10, 5, 1}; //types of coins
int nc[10];
#define SIZE (sizeof(coins)/sizeof(coins[0]))

void comp_change(int rem, int nc[]);

int main(int argc, const char * argv[]) {
    
    int cash;
    printf("Please input rem:");
    scanf("%d",&cash);
    comp_change(cash,nc);
    for (int j = 0; j < SIZE; j++)
        printf("%d,",nc[j]);
    
    return 0;
}

void comp_change(int rem, int nc[])
{
    int i;
    
    for (i = 0; i < SIZE; i++)
    
        nc[i] = 0;
        for (i = 0; rem > 0; i++){
            nc[i] = rem/coins[i];
            rem %= coins[i];
        }
    
}
