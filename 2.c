#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char sen[100];
    printf("Enter the sentence : ");
    scanf("%s", &sen);
    int arr[26]={0}, j=0;
    for(int i=0; i<strlen(sen); i++)
        arr[sen[i]-'a']++;
    int large=arr[0];
    for(int i=1; i<26; i++)
    if(arr[i]>large)
    {
        large = arr[i];
        j=i;
    }
    printf("The character with more frequency is %c with frequency of %d\n", j+'a', large);
}