#include <stdio.h>
int main()

{
	int a,b;
	scanf("%d%d",&a,&b);
	int str1[20]={0};
	int str2[20]={0};
	int str_sum[40]={0};
	int i;
	for(i=0;i<a;i++){
		scanf("%d",&str1[i]);
	}
		for(i=0;i<b;i++){
		scanf("%d",&str2[i]);
	}
	int k=0;
	int j=0;
	i=0;
   for(;k!=(a+b);){

		while((str1[i]!=0&&str1[i]<=str2[j])||(str1[i]!=0&&k==(a+b-1)))
		{
			str_sum[k]=str1[i];
			i++;
			k++;
	
		}
		while((str2[j]!=0&&str2[j]<=str1[i])||(str2[j]!=0&&k==(a+b-1)))
		{
		   	str_sum[k]=str2[j];
		   	j++;
			k++;
		
		}

	}
	
	 
	for(i=0;i<a+b;i++)
	{
	
	printf("%d ",str_sum[i]);

}
	
	return 0;
}
