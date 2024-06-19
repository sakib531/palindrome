#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50] , s2[50] , temp ;
    printf("Enter a value\n") ;
    gets(s1) ;

    strcpy(s2 , s1);
    int i , j , count = 0 ; ;
    for(i = 0 ; i < strlen(s2) / 2 ; i++)
    {
        temp = s2[i] ;
        s2[i] = s2[strlen(s2) - 1 - i] ;
        s2[strlen(s2) - 1 - i] = temp ;
    }
    printf("\nThe reverse string is %s\n" , s2);
    for(j = 0 ; s1[j] != '\0' || s2[j] != '\0' ; j++)
    {
        if(s1[j] != s2[j])
            count++ ;
            break ;
    }
        if(count == 0)
        {
            printf("It's a palindrome\n");
        }
        else
        {
           printf("It's not a palindrome\n");
        }
    return 0 ;
}
