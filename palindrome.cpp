#include<stdio.h>
int main(){
	int num,rev =0, rem;
	int originalnum;
	printf("enter the number: ");
	scanf("%d", &num);
	originalnum =num;
	//to check number is palindrome or not.
	while(num!=0){
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	if(originalnum== rev){
		printf("%d is a palindrome number. \n", originalnum);
	}
	else
		printf("%d is not a palindrome number. \n", originalnum);
	
	return 0;
}
