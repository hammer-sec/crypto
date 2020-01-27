#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void prep_input(){
    //This function will get input from stdin and format it correctly.
    char *t_input;
    int i;

    fgets(&t_input,281,stdin); //get plaintext string

    //change all digits into '' blank characters
    for(i=0; i!='\0'; i++){
        if(isdigit(t_input[i])){
            t_input[i] = (char) 0;
        }
    }

    //turn every character into uppercase by subtracting 32 from it's ASCII value
    for(i=0; i!='\0'; i++){
        if(t_input[i]>='a' && t_input[i] <='z'){
            t_input[i] = t_input[i] -32;
        }
    }
    
    //t_input is now ready to be encrypted, as far as this function is concerned

}

int main(){
//main will contain the menu function, deciding to encrypt or decrypt
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
                prep_input();
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
                if (opt_inv_ctr >=5){return 1;} //terminate after 5 invalid options
                break;
        }
        option = getchar();
    }

    return 0;
}