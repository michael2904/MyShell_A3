//
//  MyShell.c
//  MyShell
//
//  Created by Michael Abdallah-Minciotti on 2014-11-14.
//  Copyright (c) 2014 Michael Abdallah-Minciotti. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char *prompt = "Donde esta la bibliotheca";

    while(1){
        printf("%s --> ",prompt);
        char entry[200];
        char lEntry[200];
        fgets(entry,200,stdin);
        char *temp=strtok(entry,"\n");
        int i;

        for(i = 0; entry[i]; i++){
            lEntry[i] = tolower(entry[i]);
        }

        
        if(strncmp(lEntry,"quit",4)==0 && strlen(entry)==4){
            break;
        }
        else if(strncmp(lEntry,"set prompt ",11)==0 && strlen(entry)>11){
            prompt = (temp+11);
        }
        else{
            system(entry);
        }
    }
    return 0;
}
