#include <stdio.h>
void encrypt(char * encryted, int rotationAmount); // function of encyrtion 
int main()
{
       
    int key = 3;    // key is the number of revolutions, 
    char message[100] = "ATTACK OF THE CLONES"; // message to be encrypted 
    
    encrypt(message, key); // calls function 
    
    printf( "Encryted message: %s", message );
             
    
    
    return 0;
}
void encrypt(char * encryted, int rotationAmount) // pointer (*) is used to place the start of the array in the function
{
    char letter;
    int number = 0;
    
    
    while (encryted != NULL)
    {// this says that while there are still letters in message to contiune till it finds the NULL point 
         
        if(letter >= 'a' && letter <= 'z') 
        {
            letter = (letter + rotationAmount)%26; 

            encryted[number] = letter; 
        }
        else if(letter >= 'A' && letter <= 'Z') 
        {
            letter = (letter + rotationAmount)%26; 

            encryted[number] = letter;
        }
        number++;
    }

    
}

   