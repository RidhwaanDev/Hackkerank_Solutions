//
//  main.c
//  test1
//
//  Created by Ridhwaan on 8/8/17.
//  Copyright © 2017 Ridhwaan. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    // insert code here...
    
    
    
    printf("Welcome to Ridhwaan's staircase generator. Please enter the character for your staircase:  ");
    
    char c[10];
    scanf("%s", c);


    printf("Enter staircase height : \t");

    int n;
    scanf("%d",&n);
    
    
    int spacecnt = n;
    int hashcnt = 0;
    
    
    
    while(hashcnt != n){

        hashcnt++;
        spacecnt--;
        
        
        for(int s = 0; s <= spacecnt; s = s +1){
            printf(".");

        }
        for(int h = 0; h <= hashcnt; h = h+1){
            printf("%s", c);

        }
        
    
        printf("\n");
        
        // flush buffer to terminal
        fflush(stdout);

  
    }
    
    return 0;
}
