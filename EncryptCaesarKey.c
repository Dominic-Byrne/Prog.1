#include <stdio.h>
void EncryptCaesar(char* ,int ); // FUNCTION PROTOTYPE 
int main(void)
{
    
int number = 1;
char statment[100] = "ABCD"; 

EncryptCaesar(statment,number); // calls the function below up into the main fuction

return 0;
   
}


void EncryptCaesar(char* message, int key) // the function definition 
{
int encrypt; // variable for the switch statement  
int i;
for (i=0;i<100;i++){ // for loop the function 
if (message[i]>65 && message[i]<90)
    encrypt = 1; // if the ASCII value is between the captials encrypt = 1 
else
    encrypt = 0; // otherwise encrypt= 0 e.g whitespace or a symbol 
switch(encrypt){
    case 1:
        message[i] = (message[i] + key);
        if(message[i] > 90){
            message[i] = (message[i] - 26);
        }
        break; 
    case 0: 
        break; // this is to do nothing as it is whitespace 
        }
 }       
 printf("%s", message);
}