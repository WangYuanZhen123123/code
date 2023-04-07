#include<stdio.h>
 
int main()
{
	char str[100]="Hello World";
	// char *p = str;
  char *p = &str[2];
	printf("%s\n",p);
	return 0;
}

// wyz: hello,world
// zc: hi,wyz
// miniob
// V9
// master