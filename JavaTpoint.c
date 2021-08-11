#include<stdio.h> // define the header file
#include <string.h>
struct student{
char *c;
};  
int main()   // define the main function  
{  
	struct student m;
	struct student *s = &m;
	strcpy(s->c,"hello");
	printf("%s",m->c);
}  
