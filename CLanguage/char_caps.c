//it's a new way to chack the same viole chack 
#include <stdio.h>
int len(char *text){
    int i;
    for (i=0;*(text +i)!='\0';i++);
    return i;

}
char lower (char c ){
    if (c>='A'&&c<='Z'){
        c+=32;
        return c;
    }

}
int main (){
    char text [100],c;
    int i,count =0;
    printf("Enter text ");
    scanf ("%[^\n]",text);
    for (i=0;i<len (text);i++){
        c=lower (text[i]);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            count ++;
        }
        
    } 
    printf ("count of vowel (s);%d\n",count );
    return 0;
}