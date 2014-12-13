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
//initial prompt
    char *prompt = "Donde esta la bibliotheca";
//while loop to do the new shell
    while(1){
//print every time the prompt
        printf("%s --> ",prompt);
//get char array for the entry and its lowercase version
        char entry[200];
        char lEntry[200];
//get the entry
        fgets(entry,200,stdin);
<<<<<<< Updated upstream
//take out the new line
	 char *temp=strtok(entry,"\n");
        int i;
//turn to lowercase
=======
        char *temp=strtok(entry,"\n");
        int i;
>>>>>>> Stashed changes
        for(i = 0; entry[i]; i++){
            lEntry[i] = tolower(entry[i]);
        }

        //check if quit option and only quit (size==4)
        if(strncmp(lEntry,"quit",4)==0 && strlen(entry)==4){
            break;
        }
//check if it is set prompt option
        else if(strncmp(lEntry,"set prompt ",11)==0 && strlen(entry)>11){
            prompt = (temp+11);
        }
//else do as a normal shell
        else{
            system(entry);
        }
    }
    return 0;
}
