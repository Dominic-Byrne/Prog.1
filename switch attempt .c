#include <stdio.h>

int main(void)
{
    int x, i, key;
    char message[100];
    
    printf("Enter message to be encrypted or decrypted in capitals: ");
    scanf("%s", &message);
    printf("Enter key as an integer: ");
    scanf("%d", &key);
    printf("If code needs to be encrypted enter 1\n"); 
    printf("If code needs to be decrypted enter 2\n"); 
    printf("Select 1 or 2: ");
    scanf("%d", &x);
    
    switch(x){
    case 1:
        for (i=0;(message[i]!=0);i++)
            message[i] = message[i] + key;
            printf("Encrypted message is: %s\n", message);
            break;
    case 2: 
        for (i=0;(message[i]!=0);i++)
            message[i] = message[i] + key;
            printf("Decrypted message is: %s\n", message);
            break;
    default:
            printf("ERROR");
        
}
}
           