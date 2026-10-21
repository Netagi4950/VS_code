#include <stdio.h>
#include <string.h>

#include <stdlib.h>
int main(){
    system ("cls");
    char pass[1000];
    printf ("Enter your passsword ::");
    scanf("%100s",pass);
    printf("your password is %s\n\n",pass);
    printf("The no of char in your passcode is: %zu\n",strlen (pass));
    //chacking the cahr no
    if (strlen(pass)<8){
        printf("Your passcode is ok... but not so good ");
        printf("you should have at least 10 char in your passcode ");
        printf("like : sayantandha");


    }
    else if (strlen(pass)<=10){
        printf("Your passcode's char no is enough\n");
    }
    else if (strlen (pass)<=4){
        printf("The passcode have the list no of char in it making is super easy to all hack\n");

    }
    else if (strlen (pass)>=11){
        printf("The passcode have more than enough char in it\n");

        
    }
    else {
        printf("You should write something \n");
    }
    //chacking the caps here 

    int i=0;
    int j=0;
    for (;pass[i]!='\0';i++){
        char c=pass[i]; 
        if (strpbrk(pass,"ABCDEFGHIJKLMNOPQRSTUVWXYZ")==NULL){
            j=0;
        }
        else{
            j+=1;
        }
    }
    if (j=='0'){
        printf ("Your passcode have no capital letter\n");
    }
    else {
        printf("You have at least one caps char... it is ok to have\n");
    }
    //chacking no or not
    int n=0,l=0;
    for (;pass[n]!='\0';n++){
        char t= pass[n];
        if (strpbrk(pass,'1234567890')==NULL){
            l=0;
        }
        else{
            l+=1;
        }
    }
     if (l=='0'){
        printf ("You should have some digit in your passcode ");
     }
     else {
        printf("It is always good to have some digit is your passcode..good");
     }

    
    system ("pause ");

    return  0;

}