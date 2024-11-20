#include<stdio.h>
 int main(){
 	int num1;
 	scanf("%d",&num1);//lay gia tri num1 tu nguoi dung ;
	   
	 int num2;
	  
	 scanf("%d",&num2);//lay gia tri num2 tu nguoi dung ;
	  
	 int total=num1+num2;
	 int subtraction=num1-num2;
	 float  division=float(num1)/float(num2);
	 int  multiplication=num1*num2;
	  
	 printf("tong cua num1 va num2 la %d",total) ;
	  printf("hieu  cua num1 va num2 la %d",subtraction) ;
	   printf("thuong cua num1 va num2 la %f",division) ;
	    printf("phep nhan cua num1 va num2 la %d",multiplication) ;
	 return 0;
	  
 } 
