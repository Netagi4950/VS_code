#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    system("cls");
    char name[10],ans1[20],ans2[20],ans3[20],ans4[20],ans5[20];
    int i=0;
    
    printf("Enter your name ::");
    scanf("%8s",name);
    printf("Can you tell me which is my fev color?? ");
    scanf("%10s",ans1);
    //ans no 1 done 
    if (strcmp(ans1,"blue")==0){
        printf("you are correct\n");
        printf("You get 2 point\n");
        i+=2;
        printf("Your score is %d\n",i);
    }
    else{
        printf("You have a incorrect ans...\n");
        printf("My fev colour is blue\n");
        
    }
    //ans no 2 done 
    printf("Can you tell  me which is my fev car brand?? ");
    scanf("%15s",ans2);
    if (strcmp(ans2,"BMW")==0){
        printf("Your ans is correct\n");
        printf("You get 2 point\n");
        i+=2;
        printf("Your score is %d\n",i);

    }
    else {
        printf("Your ans is incorrect\n ");
        printf("My fev car brand is BMW\n");

    }
    //ans no 3 done 
    printf("Can you tell me waht was my girl friend name?? ");
    scanf("%18s",ans3);
    if (strcmp(ans3,"shreyosi")==0){
        printf("Your ans is correct\n");
        printf("You get 2 point\n");
        i+=2;
        printf("Your score  is %d\n",i);
    }
    else {
        printf("Your ans is incorrect\n");
        printf("my girlfriend was shreyosi\n");
    }
    //ans no 4 done 
    printf("Can you tell me what is my fev food is ?? ");
    scanf("%18s",ans4);
    if (strcmp(ans4,"birirnay")==0){
        printf("Your ans is correct\n");
        printf("You get 2 point\n");
        i+=2;
        printf("Your score  is %d\n",i);

    } 
    else {
        printf("Your ans is incrrect\n");
        printf("my fev food is birinay\n");

    }
    //ans no 5 done 
    printf("Can you tell me what is my fev sport?? ");
    scanf("%18s",ans5);
    if (strcmp(ans5,"F1")==0){
        printf("Your ans is correct\n");
        printf("You get 2 point\n");
        i+=2;
        printf("Your score is %d\n",i);
    }
    else{
        printf("Your ans is incorrect\n");
        printf("my fev sport is F1\n");

    }
    
    //friend election done 
    printf("Your total score is::%d\n\n",i);
    if (i<=5){
        printf("%s you are my normal friend\n",name );
        
    }
    else if (i<=8){
        printf("%s you are my special friend\n ",name);
        
    }
    else if (i<=10){
        printf("%s you are my best friend\n ",name );
        
    }
    
    else{
        
        ("%s you are not my friend\n",name );
    }
    
    printf("Hi i am sayantan dhara ");
    pritnf("I am from kolkata\n");

    system("pause");
    return 0;
}