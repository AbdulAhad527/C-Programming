//7.	Write a program in C to count the number of words and characters in a file.
#include<stdio.h>
#include <ctype.h>
int main()
{
FILE *ptr;
int inwords=0;
int words=0;
int characters=0;
int ch;
ptr=fopen("filesfiles.c","r");
if(ptr==NULL)
{
printf("cannot access");
exit(1);
}

while(ch=fgetc(ptr)!=EOF)
{
characters++;
if(isspace(ch))
{
words++;
}


}
fclose(ptr);
printf("no of wordsin file:%d",words);
printf("\nno of characters:%d",characters);
return 0;
}

//
//#include <stdio.h>
//#include <ctype.h> // Required for isspace()
//
//int main() {
//    FILE *ptr;
//    int words = 0;
//    int characters = 0;
//    int ch; // Use int for EOF compatibility
//    int in_word = 0; // Flag to track if we are inside a word
//
//    ptr = fopen("std.struct.c", "r");
//    if (ptr == NULL) {
//        printf("Error: Could not open file.\n");
//        return 1;
//    }
//
//    // Fixed: parentheses around assignment
//    while ((ch = fgetc(ptr)) != EOF) {
//        characters++;
//
//        // Logic for word counting:
//        // A word starts when we find a non-space character
//        if (isspace(ch)) {
//            in_word = 0;
//        } else if (in_word == 0) {
//            in_word = 1;
//            words++;
//        }
//    }
//
//    fclose(ptr);
//
//    printf("Number of words in file: %d\n", words);
//    printf("Number of characters: %d\n", characters);
//
//    return 0;
//}
