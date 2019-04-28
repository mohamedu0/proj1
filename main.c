#include <stdio.h>
/* this coude id ude to encrypt and decrypt useing the Rotation Cipher and the Substitution Cipher methods.
- when trying to  encrypt or decrypt by the rotation cipher please use the key.txt file to put the key 
- please use the input.txt file to put the words you would like to  encrypt or decrypt*/
     char *enrotationrotaion(char *msg[1024], int key); // rotation cipher encription function header
    char *decribtionrotaion(char *msg[1024], int key);  // rotation cipher dencription function header
    char *encrybtsub(char *msg,char *emsg);     // Substitution Cipher encription function header
    char  *decrybtsub(char *msg,char *dmsg);     // Substitution Cipher dencription function header
int 
main () 
{
  
 FILE *input;  //file input 
 FILE *output; //output file
 FILE *filekey;  //key file
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
 
     if(n == 1) { //if user enters 1
             fscanf(input,"%s\n", &msg);     //scan the text that was writen in input.txt and places it in the value msg
             fscanf(filekey,"%d", &key);     //scan the number that was writen in key.txt  and places it in the value key
             code = enrotationcipher(msg, key); //takes the value from the function enrotationcipher and places it as the value code
             code = msg;                         
  }
        else if (n == 2){  //if user enters 2 
             fscanf(input,"%s\n", &msg);    //scan the text that was writen in input.txt and places it in the value msg
             fscanf(filekey,"%d", &key);         //scan the number that was writen in key.txt  and places it in the value key
             code = decribtioncipher(msg,key);   //takes the value from the function decribtioncipher and places it as the value code 
             code = msg;
    
  }
        else if(n==3){ //if user enters 3
                fscanf(input,"%s\n", &msg);    //scan the text that was writen in input.txt and places it in the value msg
            code = encrybtsub( msg, emsg);  //takes the value from the function enrotationsubst and places it as the value code
             code = msg;
}
        else if(n==4){  //if user enters 4
                scanf(input,"%s\n", &msg);  //scan the text that was writen in input.txt and places it in the value msg
                 code = decrybtsub( msg,dmsg);     //takes the value from the function decribtionsubst and places it as the value code
                     code = msg;
}
}

  }
    

  fprintf(output,"%s\n ",msg); //prints the enctypted or decrypted text on the file output.txt

return 0;
 
}



/*this function enctypts the text given from the user using the rotation cipher  */
char enrotationcipher(char* msg[1024], int key){
  char code; 
  int i;
  
  msg[1024] = "this is a string";  //msg is save as a string in the specified memorey space
  for (i = 0; msg[i] != '\0'; ++i){ 
   code = msg[i];
		
		if(code>= 'a' && code<= 'z'){ //limits the charecters from a to z
			code= code + key;  // addes the chrecters by the kye which movet the charecter by the number stored in key
			
			if(code< 'a'){  //when the letter stored in code smaller than a it moves it up 
				code = code -  'z'  + 'a' -  1;
			}
			
			msg[i] = code;
		}
		/* the same is done in the following 2 but from A to Z*/
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
 
 
 
 /*this function denctypts the text given from the user using the rotation cipher  */
char decribtioncipher(char* msg[1024], int key){
  char code;
  int i;
  msg[1024] = "this is a string"; //msg is save as a string in the specified memorey space
  for (i = 0; msg[i] != '\0'; ++i){
   code = msg[i];
		
		if(code>= 'a' && code <= 'z'){ //limits the charecters from a to z
			code= code - key;    // subtracts the chrecters by the kye which movet the charecter by the number stored in key
			
			if(code< 'a'){   //when the letter stored in code smaller than a it moves it up 
				code = code+ 'z' - 'a' + 1;
			}
			
			msg[i] = code;
		}
		/* the same is done in the following 2 but from A to Z*/
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
 


/*this function is used for encrypting a text from the user usong the substitution cipher */
char *encrybtsub(char *msg,char *emsg){
   int i , j = 0;
   int k, key;
 
  //char *emsg;
   k  =  key % 26;  
   int code;
   for (i =0;msg[i] != '\0' ;i++){
     
       if(msg[i] >=97 && msg[i] <=122){  //when the charecter in the text is greater or same as a (accordind to the ascii table) and smaller or same as then z (122)
           code = msg[i] + k;  //the charecter is mover to a diffrent location 
           if(code >122){  // if the chrecter is then grater than z
               emsg[j++] = 97 + (code - 122);  //the charecter will start to go again from a
           }    
            }else {
               emsg[j++] = msg[i]; //if its in between the it is stored in msg
           }
       }

           
         return code;
   }


    
/*this function is used for dencrypting a text from the user usong the substitution cipher */
char *decrybtsub(char *msg,char *dmsg){
   int i , j = 0;
   int k,key;
 
  //char *emsg;
   k  =  key % 26;
   int code;
   for (i =0;msg[i] != '\0' ;i++){
     
       if(msg[i] >=97 && msg[i] <=122){  //when the charecter in the text is greater or same as a (accordind to the ascii table) and smaller or same as then z (122)
           code = msg[i] - k;  //the charecter is moved back to it actual location 
           if(code < 97>){  // if the chrecter is then smaller r than a
               emsg[j++] = 122 - (97 - code);   //the charecter will start to go again from z
           }    else{
               dmsg[j++] = code;
 }
            }else {
               dmsg[j++] = msg[i];
           }
       }

           
       

   
   return code;
   }
 
 