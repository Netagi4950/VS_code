#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main(){
    char name[40],fname[40],mname[40],schname[90];
    int age,phone;
    float hight;
    //input section
    //to take input of a str with space it it you have to do this below
    //fgets (name ,sizeof(name ),stdin);
    //degining of the program
    char starti[10];
    printf("===========Enter your all with truth============");
    fgets(starti,sizeof(starti),stdin);
    if (starti[0] == '\n')
        system("cls");
    
    //input section for me 
    system ("cls");
    printf ("Enter your name: ");
    fgets (name ,sizeof(name),stdin);
    system("cls");
    printf ("Enter your father's name: ");
    fgets(fname ,sizeof(fname),stdin);
    system ("cls ");
    printf("Enter your mother's name: ");
    fgets(mname ,sizeof (mname),stdin);
    system ("cls");
    printf ("Enter your school name: ");
    fgets (schname ,sizeof(schname),stdin);
    system("cls");
    //chacking area for age 
    while (age>90||age <=5){
        //age section 
        printf("What is your age : ");
        scanf("%d",&age );
        
    }
    //end of this season
    system("cls");
    //cheacking area for phone no
    //number decode
    printf ("What is your phone no : ");
    scanf("%d",&phone); 
    
    //int i;
    //for (i=1;i<=phone;i++){
        
    //}
    //while(i>10||i<10){
    //    printf ("What is your phone no : ");
    //    scanf("%d",&phone);
        
    //}
    
    //length =strlen(phone);
    
    
    system ("cls");
    printf( "What is your hight : ");
    scanf ("%f",&hight);
    system("cls");

    //result section
    char next2[40];
    printf ("=================================\n");
    printf("     Here is your all data\n");
    printf("=================================\n");
    fgets(next2,sizeof(next2),stdin);
    if(next2[0] == '\n'){
        system("cls");
    }
    //new start

    printf("Name--%s\n",name);
    printf("Mother's Name--%s\n",mname);
    printf("Father's Name--%s\n",fname);
    printf("School Name--%s\n",schname);
    printf("Age--%d\n\n",age);
    printf("phone no--%d\n",phone);
    printf("Hight--%.2f\n",hight);
    //next part is goning on
    char next[10];
    printf("Lets go to the next part : ");
    fgets(next,sizeof(next),stdin);
    if (next[0] == '\n')
        system("cls");
    
    //system("cls");
    printf("Hi amn how are yo\n");
    system ("pause ");
    return 0;
}   