#include <stdio.h>

 char enrotationcipher(char* msg[1024], int key);
 char decribtioncipher(char* msg[1024], int key);
 
int 
main () 
{
  
 FILE *input;
 FILE *output;
 FILE *filekey;
char* msg[1024],code;
int key;
int i,n,count, spaces = 0;
  
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
/* else if(n==3){
key = 0    ;
while(count<26){

key = key + 1;
    code = decribtioncipher(msg, key);
    code = msg;
  

fprintf(output,"the key: %d   ",key);
 fprintf(output,"%s\n",msg);
 
 
 count++;

}
}*/

  }
    

  fprintf(output,"%s\n ",msg);
 fprintf(output,"the key: %d",key);
return 0;

 
}

char enrotationcipher(char* msg[1024], int key){
  char code;
  int i;
  msg[1024] = "this is a string";
  for (i = 0; msg[i] != '\0'; ++i){
   code = msg[i];
		
		if(code>= 'a' && code<= 'z'){
			code= code + key;
			
			if(code< 'a'){
				code = code -  'z'  + 'a' -  1;
			}
			
			msg[i] = code;
		}
		else if(code>= 'A' && code<= 'Z'){
			code= code + key;
			
			if(code< 'A'){
				code= code-  'Z'  + 'A' -  1;
			}
			
			msg[i] = code;
		}
}

    
  return code;
 }
 
char decribtioncipher(char* msg[1024], int key){
  char code;
  int i;
  msg[1024] = "this is a string";
  for (i = 0; msg[i] != '\0'; ++i){
   code = msg[i];
		
		if(code>= 'a' && code <= 'z'){
			code= code- key;
			
			if(code< 'a'){
				code = code+ 'z' - 'a' + 1;
			}
			
			msg[i] = code;
		}
		else if(code>= 'A' && code<= 'Z'){
			code= code- key;
			
			if(code< 'A'){
				code= code+ 'Z' - 'A' + 1;
			}
			
			msg[i] = code;
		}
}


    
  return code;
 }