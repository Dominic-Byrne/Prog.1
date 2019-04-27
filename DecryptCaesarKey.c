#include <stdio.h>
void DecryptCaesar(char ,int ); // FUNCTION PROTOTYPE 
int main(void)
{
int number = 1;
char statment[100] = "ATTACK OF THE CLONE"; 

DecryptCaesar(stament,number);
   
}
void DecryptCaesar(char message[100] int key, )
int decrypt; 
for (i=0;(message[i]!=0);i++){
if (message[i]>65 && message[i]<90)
    decrypt = 1; 
else
    decrypt = 0; 
switch(decrypt){
    case 1:
        message[i] = (message[i] - key);
        if((message[i]+key) < 90){
            message[i] = (message[i] - (key - 27));
        }
        break; 
    case 0: 
        break; // this is to do nothing as it is whitespace 
        }
 }       
 puts(message);