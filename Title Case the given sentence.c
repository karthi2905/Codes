#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,sizeof str,stdin);
    int i,j;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            str[i+1]=toupper(str[i+1]);
        }
    }
    str[0]=toupper(str[0]);
    printf("%s",str);
    return 0;
}