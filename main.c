#include <stdio.h>

 char enrotationcipher(char msg[1024], int key);
 
int 
main () 
{
  
 
char msg[1024],code;
int key , i;
  
 printf("what is the word\n");
    scanf("%s", &msg);
  

 
 
printf ("please enter key\n");
  
 
scanf ("%d", &key);
  

    code = enrotationcipher(msg, key);
    code = msg;
      
  printf("new text is :%s\n",msg);
    

  
 
return 0;

 
}

char enrotationcipher(char msg[1024], int key){
  char code;
  int i;
  for (i = 0; msg[i] != '\0'; ++i){
   code = msg[i];
    code = code + key;
  msg[i] = code;
        return msg ;
    } 
 }
 