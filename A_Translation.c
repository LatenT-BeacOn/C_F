#include<stdio.h>
#include<string.h>
int main()
{
   char ch[100];
   scanf("%s",ch);
   int len1=strlen(ch);
   char a[100];
   scanf("%s",a);
   strrev(a);
   int m=0;
   for(int i=0;i<len1;i++)
   {
      if(ch[i]!=a[i])
      m=1;
   }
  if(m==1)
printf("NO\n");
else
printf("YES\n");


return 0;

}