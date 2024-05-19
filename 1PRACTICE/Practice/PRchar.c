#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
// compare two stings 
char txt1 [100];
char txt2[100];
char c;

char *cptr = txt1;
char *sptr = txt2;

int comp;

printf("Enter string one: "); 
scanf("%s", &txt1);
printf("Enter string two: ");
scanf("%s", &txt2);

comp = strcmp(txt1,txt2); 

if (comp == 0){
    printf("The strings are equal\n");
}
else{
    printf("The strings are not equal\n");
}
printf("The length of string 1 is %d\n",strlen(txt1));

printf("%s\n",strcat(txt1,txt2));

// loop through each letter in the word

  int n = strlen(txt1); // Find the length of the word
  
  for (int i = 0; i < n; i++) {
    if (isupper(txt1[i])){
    printf("%c\n", txt1[i]); // Print each character of the word
  }
  }

 
}