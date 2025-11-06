/* Task description:
Write a program that asks the user to enter a word, stores it in a string, and prints it letter by letter vertically. For example if you give „Word”, the result should be:

W
o
r
d

You can assume that the word is never longer than 99 characters.

*/


#include <stdio.h>

int main(){
  char str[100];
  printf("Enter string: ");
  fgets(str, sizeof(str), stdin);

  for(int i=0; str[i] != '\0'; i++) {
    printf("%c\n", str[i]);
  }

  return 0;
}
