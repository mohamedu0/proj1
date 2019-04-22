#include <stdio.h>

 char enrotationcipher(char msg[1024], int key);
 char decribtioncipher(char msg[1024], int key);
 
int 
main () 
{
  
 FILE *input;
 FILE *output;
 FILE *filekey;
char msg[1024],code;
int key;
int i,n;
  
input = fopen("input.txt","r");
filekey = fopen("key.txt", "r");
  output = fopen("output.txt", "w");
printf("1) encript\n 2)decript\n");
scanf("%d",&n);
 while (feof(input)== 0){
 
 if(n == 1){
    fscanf(input,"%s\n", &msg);
    fscanf(filekey,"%d", &key);
    code = enrotationcipher(msg, key);
    code = msg;
  }
  else if (n == 2){
      fscanf(input,"%s\n", &msg);
    fscanf(filekey,"%d", &key);
    code = decribtioncipher(msg,key);
    code = msg;
  }

  
    
}
  fprintf(output,"%s\n ",msg);
 fprintf(output,"the key: %d",key);
return 0;

 
}

char enrotationcipher(char msg[1024], int key){
  char code;
  int i;
  msg[1024] = "this is a string";
  for (i = 0; msg[i] != '\0'; ++i){
   code = msg[i];
    code = code + key;
  msg[i] = code;
       
    } 
  return code;
 }
 
char decribtioncipher(char msg[1024], int key){
  char code;
  int i;
  msg[1024] = "this is a string";
  for (i = 0; msg[i] != '\0'; ++i){
   code = msg[i];
    code = code - key;
  msg[i] = code;
       
    } 
  return code;
 }
 