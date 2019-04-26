#include <stdio.h>
/* this coude id ude to encrypt and decrypt useing the Rotation Cipher and the Substitution Cipher methods.
- when trying to  encrypt or decrypt by the rotation cipher please use the key.txt file to put the key 
- please use the input.txt file to put the words you would like to  encrypt or decrypt*/
  char *enrotationrotaion(char *msg[1024], int key); // rotation cipher encription function header
 char *decribtionrotaion(char *msg[1024], int key);  // rotation cipher dencription function header
 char *enrotationsubst(char *msg, char code[]);     // Substitution Cipher encription function header
 char *decribtionsubst(char *msg, char code[]);     // Substitution Cipher dencription function header
int 
main () 
{
  
 FILE *input;  //file input 
 FILE *output;
 FILE *filekey;
char* msg[1024],code;
int key;
int i,n,count, spaces = 0;
  
input = fopen("input.txt","r");         //opening file input.txt to read from when using input
filekey = fopen("key.txt", "r");        //opening file key.txt to read from when using filekey
  output = fopen("output.txt", "w");    //opening file output.txt to read from when using output
  
  
printf("please enter a number according to the following order \n1) encrypt using rotation cipher\n 2)decrypt using rotation cipher\n 3)encrypt usong substitution cipher\n 4)decrypt using sustitution cipher\n");
scanf("%d",&n); // takes the number used by the user to use the function using the value of n

/*the following function are done till there is noting else to scan from input.txt file*/
 while (feof(input)== 0){    // this is a loob to make sure that input.txt is scaned till there is nothing else is needed to be scand
 
 if(n == 1){
    fscanf(input,"%s\n", &msg);     //scan the text that was writen in input.txt and places it in the value msg
    fscanf(filekey,"%d", &key);     //scan the number that was writen in key.txt  and places it in the value key
    code = enrotationcipher(msg, key); //takes the value from the function enrotationcipher and places it as the value code
    code = msg;                         
  }
  else if (n == 2){
      fscanf(input,"%s\n", &msg);    //scan the text that was writen in input.txt and places it in the value msg
    fscanf(filekey,"%d", &key);         //scan the number that was writen in key.txt  and places it in the value key
    code = decribtioncipher(msg,key);   //takes the value from the function decribtioncipher and places it as the value code 
    code = msg;
    
  }
 else if(n==3){
 fscanf(input,"%s\n", &msg);    //scan the text that was writen in input.txt and places it in the value msg
 code = enrotationsubst(msg,code[]);  //takes the value from the function enrotationsubst and places it as the value code
    code = msg;
}
else if(n==4){
    scanf(input,"%s\n", &msg);  //scan the text that was writen in input.txt and places it in the value msg
 code = decribtionsubst(msg,code[]);     //takes the value from the function decribtionsubst and places it as the value code
    code = msg;
}
}

  }
    

  fprintf(output,"%s\n ",msg); //prints the enctypted or decrypted text on the file output.txt
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
 
 