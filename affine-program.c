//main will contain the menu function, deciding to encrypt or decrypt

#include <stdio.h>
#include <stdbool.h>

int main(){

    char option;
    bool opt_flag_su;
    int opt_inv_ctr;

    opt_flag_su = false;

    printf("Enter an option:\n 1) Encrypt\n 2) Decrypt\nPlease enter an option.");
    option = getchar();

    while(opt_flag_su == false){

        switch (option){
            case '1':
                //encrypt
                printf("Encrypting...\n");
                opt_flag_su = true;
                break;
            case '2':
                //decrypt
                printf("Decrypting...\n");
                opt_flag_su = true;
                break;
            case '\n':
                break;
            default:
                printf("Invalid option. Please try again.\n");
                opt_inv_ctr++;
                if (opt_inv_ctr >=5){return 1;}
                break;
        }
        option = getchar();
    }

    return 0;
}