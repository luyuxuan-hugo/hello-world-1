#include <stdio.h>
int main()
{
    int month, day, year;
     
    printf("请输入日期（月/日/年）: ");
    
    scanf("%d /%d /%d", &month, &day, &year);
    
    printf("Dated this %d", day);
    switch (day) {
      case 1: case 21: case 31:
        printf("st"); break;
      case 2: case 22:
        printf("nd"); break;
      case 3: case 23:
        printf("rd"); break;
      default: printf("th"); break;
  }
    printf(" day of ");
  switch (month) {
    case 1:  printf("January");   break;
    case 2:  printf("February");  break;
    case 3:  printf("March");     break;
    case 4:  printf("April");     break;
    case 5:  printf("May");       break;
    case 6:  printf("June");      break;
    case 7:  printf("July");      break;
    case 8:  printf("August");    break;
    case 9:  printf("September"); break;
    case 10: printf("October");   break;
    case 11: printf("November");  break;
    case 12: printf("December");  break;
  }
  printf(", 20%.2d.\n", year);
  int y=year;
  int d=day;
  int w,m;
  int i=0;
  if(m<=2){
  	m=month+12;
  }
  else {
  	m=month;
  	
  }
  w=y+(y/4)-35+26*(m+1)/10+d-1;
  if(w%7==0)
  {
  	printf("这一天是星期天"); 
  }
  else{
  	while(w%7!=0){
  		w--;
  		i++;
  }
}
switch(i){

  	case 1:printf("这一天是星期一\n");
  	break; 
  	case 2:printf("这一天是星期二\n");
  	break;
  	case 3:printf("这一天是星期三\n");
  	break;
  	case 4:printf("这一天是星期四\n");
  	break;
  	case 5:printf("这一天是星期五\n");
  	break;
  	case 6:printf("这一天是星期六\n");
  	break;
    default: break; 
}
   
  return 0;
}

