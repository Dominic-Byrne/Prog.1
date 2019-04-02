#include <stdio.h>
void encrypt
int main()
{
    char message[100], letter;   // message  is the string  
    int number , key = 3;    // key is the number of revolutions, while the number should hold the results  
    char message[] = "ATTACK OF THE CLONES"; // message to be encrypted 
    for(number = 0; message[number] != NULL; number++) {
         // this says that while there are still letters in message to contiune till it finds the NULL point 
        if(letter >= 'a' && letter <= 'z') {
            letter = (letter + key)(%26); 
           if (letter)
            
            
            message[number] = letter 
            
    
    
    return 0;
}
