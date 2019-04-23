#include <stdio.h>
void DecryptCaesar(char message[100] int key int i )
int main(void)
{
int number = 1, x;
char statment[100] = ATTACK; 

DecryptCaesar(stament number x);
   
}
void DecryptCaesar(char message[100] int key, int i )
if (message[i]>65 && message[i]<90)
for (i=0;(message[i]!=0);i++){
            message[i] = (message[i] - key);
            if((message[i]+key) < 90){
            message[i] = (message[i] - (key - 27));
            }
        }
            
            
            return message;