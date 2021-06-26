#include <stdio.h>
#include <string.h>



int main()
{
    char keyword[25];
    printf("Enter a keyword of five letters without repeating letters for encryption: ");
    scanf("%[^\n]s",&keyword);

    int len;
    len=strlen(keyword);
    
    char arr[5][5];

    strcpy(arr[0], keyword);

    int i;
    int j;
    char *p;
    char *q;
    char letters[26]="abcdefghiklmnopqrstuvwxyz";
    char a[30]="";
    for(i=0;i<26;i++)
    {
        
        p= strchr(a,letters[i]);
        q= strchr(keyword,letters[i]);
        if (p==NULL && q==NULL)
            strncat(a,&letters[i],1);
    
    }
    strcpy(arr[1],a);
    printf("%s",a);
    
    return 0;

}