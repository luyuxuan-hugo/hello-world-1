#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
  int n1;
  cin>>n1;
 int i=0;
 for(i=0;i<n1;i++)
 {
 	int n2;
 	cin>>n2;
 
 	
 	
 	int str[200]={0};
 	int m;
 	for(m=0;m<n2;m++)
 	{
 		cin>>str[m];
 	}
// 	    int str_min=str[0];
//    for(i=1;i<n2;i++)
//    {
//    	if(str[i]<str_min)
//    	{
//    		str_min=str[i];
//    	}
//    }
 	sort(&str[0],&str[n2]);
 		if(n2==1){
 		printf("ERROR\n");
 }
        
 		else
		 {
		 	int cnt=0;
		 int str_min=str[0];
		 int l; 
 		for(l=1;l<n2;l++){
 			if(str[l]>str_min)
 			{
 				printf("%d\n",str[l]);
 	           	break;
 			}
 			cnt++;
 		}
 		if(cnt==n2-1)
 		{
 			printf("ERROR\n");
 		
 		}
 	}
 		
}
// 	for(i=0;i<n2;i++)
// 	{
// 		printf("%d  ",str[i]);
// 	}
 

	return 0;
	
	
}
