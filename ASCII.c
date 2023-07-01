#include <stdio.h>
#include<string.h>
int main()
{
  int i;
  char str[100];
  printf("Enter any string: ");
  fgets(str,100,stdin);
  for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    printf("\nString is= %s",str);
    return 0;
}
