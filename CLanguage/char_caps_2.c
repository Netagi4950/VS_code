//it is also i type to find  out the no of vowel  in words 
#include <stdio.h>
#include <ctype.h>
int main (){
    char text [100],c;
    int i,count =0;
    printf ("Enter a text ");
    scanf("%[^\n]",text );
    for (i=0;text[i]!='\0';i++){
        c=tolower (text[i]);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count ++;
        }
    }
    printf ("Count of vowel (s)%d--\n",count );
    return 0;
}