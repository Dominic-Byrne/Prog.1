#include <stdio.h>

int main(void)
{
    int x, i, key;
    char message[100];
    
    printf("Enter message to be encrypted or decrypted in capitals: /n");
    scanf("%s", &message);
    printf("Enter key as an integer: /n");
    scanf("%d", &key);
    printf("If code needs to be encrypted enter 1/n If code needs to be decrypted enter 2/n Select 1 or 2: /n");
    scanf("%d", &x);
    
    switch(x)
        case 1:
        while (message[i] ! = 0)
            message = message + key;
            printf("Encrypted message is: %s/n", message);
            break;
        case 2: 
        while (message[i] != 0)
            message = message + key;
            printf("Decrypted message is: %s/n", message);
            break;
        default:
            printf("ERROR");
            
}