#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main(){
    char name[40],fname[40],mname[40],schname[90];
    //input section
    //to take input of a str with space it it you have to do this below
    //fgets (name ,sizeof(name ),stdin);
    //degining of the program
    char starti[10];
    printf("===========Enter your all with truth============");
    fgets(starti,sizeof(starti),stdin);
    if (starti==(char)13 ){
        system("cls");
    }
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
    //result section
    char next2[40];
    printf ("=================================\n");
    printf("Here is your all data\n");
    printf("=================================\n");
    fgets(next2,sizeof(next2),stdin);
    if(next2==(char)13){
        system("cls");

    }

    printf("Name--%s\n",name);
    printf("Mother's Name--%s\n",mname);
    printf("Father's Name--%s\n",fname);
    printf("School Name--%s\n",schname);
    //next part
    char next[10];
    printf("Lets go to the next part : ");
    fgets(next,sizeof(next),stdin);
    if (next==(char)13 ){
        system("cls");
    }
    printf("Hi amn how are yo\n");
    system ("pause ");
    return 0;
}