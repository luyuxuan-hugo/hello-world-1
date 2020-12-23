#include <stdio.h>
#include <string.h>
int main() 
{
	char a[50];
	int n=0,i=0,c;
    while((c=getchar())!='\n'){
		
		a[i]=c;
		i++;		
}
    i=strlen(a);
    char str[20];
    int k=0;
for(n=0;n<i;n++)
{  
    int m=0;
	
	while((a[n]>'a'&&a[n]<'z')||(a[n]>'A'&&a[n]<'Z'))
	{
		str[k]=a[n];
		k++;
		n++;
	}
	
	while(k>=0)
	{
		printf("%s",str[k]);
		k--;
	}
	
	printf("%s",a[n]);

    k=0;
}
		
		
	
	return 0;
}
