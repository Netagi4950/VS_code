#include<stdio.h>
#include<string.h>
int main(){
    char text[100],c;
    int i,count =0;
    printf("Enter your name ");
    scanf("%[^\n]",text);
    for (i=0;i<strlen(text);i++){
        c= text[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count++;

        }
    }
    printf ("Count of vowel(s)%d\n",count );
    return 0;
}