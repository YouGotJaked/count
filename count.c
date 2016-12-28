/* 
 * File:   count.c
 * Author: Jake Day
 * Class: COEN 12
 * Instructor: Atkinson
 * Section: T 5:15-8pm
 * Created on March 29, 2016, 5:52 PM
 * Description: This program reads words from a text file and displays the
 * total number of words in the file.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    char c;
    int count;
    
    FILE * file; //creates a pointer for the text file to be read
    file = fopen(argv[1], "r");
    
    if (file == 0) { //if fopen returns 0, the null value, the program fails
        printf("Cannot open this file\n");
        exit(-1);
    } else {
        count = 1; //count starts with 1 because there's always one less space than words
        while(1 < 2) { //runs a loop that iterates through all the characters in the text file
            c = fgetc(file);
            if (c == EOF) {
                break;
            } else {
               if (c == ' ') {
                count++;
               }
            }
        }
    }
    
    printf("Word count: %d", count);

    return 0;
}
