#include <stdio.h>
/* this coude id ude to encrypt and decrypt useing the */
 char *enrotationcipher(char *msg[1024], int key); 
 char *decribtioncipher(char *msg[1024], int key);
 char *enrotationsubst(char *msg, char code[]);
 char *decribtionsubst(char *msg, char code[]);
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
 else if(n==3){
 fscanf(input,"%s\n", &msg);
 code =enrotationsubst(msg,code[]);
    code = msg;
}
else if(n==4){
    scanf(input,"%s\n", &msg);
 code = decribtionsubst(msg,code[]);
    code = msg;
}
}

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
 


char *enrotationsubst(char *msg, char code[]){
 char code[26] = {'b','a','c','d','s','f','g','h','i','j','k','l','m','n','o','p','q','r','e','t','u','v','w','x','y','z'};
int length = "length of sting";
for(int i = 0; i < length; i++){
    int  l = msg[i] ;
    if(l >= 0 && l < 26){
   msg = code
}

    
  }
  return code;
}
char *decribtionsubst(char *msg, char code[]){
 char code[26] = {'b','a','c','d','s','f','g','h','i','j','k','l','m','n','o','p','q','r','e','t','u','v','w','x','y','z'};
int length = "length of sting";
for(int i = 0; i < length; i++){
    int  l = msg[i] ;
    if(l >= 0 && l < 26){
   msg = code
}

    
  }
  return code;
}
 
 