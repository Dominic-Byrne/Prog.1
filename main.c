#include <stdio.h>
int main(void)
{
    int x = 1, i, key 4; // change x to 1 for encryption or 2 of decryption 
    char message[100] = "CLONE";// imputed string must be in capitals 
    
    switch(x){
    case 1:
        for (i=0;(message[i]!=0);i++){ // loop for the entire string 
            if (message[i]>65 && message[i]<90){ // if the value is between the ASCII values of the capital letters 
            message[i] = (message[i] + key);
            if((message[i]+key) > 90){
            message[i] = (message[i] - 26);
            }}
        } // if the value encrypted is greater then the ASCII value of Z or 90 then 26 is minused to make it a capital letter 
            printf("Encrypted message is: %s", message);
            
            break;
    case 2: 
        for (i=0;(message[i]!=0);i++){
            if (message[i]>65 && message[i]<90){
            message[i] = (message[i] + key);
            if((message[i]+key) > 90){
            message[i] = (message[i] -26);
            }}
        }// if the value decrypted is greater then the ASCII value of Z or 90 then 26 is minused to make it a capital letter 
            printf("Decrypted message is: %s", message);
            
            break;
    default:
            printf("ERROR");
        
}
}
