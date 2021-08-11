#include <stdio.h>
#include <stdbool.h>
int main() {
    
    int side1;
    int side2;  
    int side3;  
    int numBigSides;
    bool error=false; 
    do
	{
		printf("Enter three numbers to form a triangle e.g : ");
		scanf("%d %d %d", &side1, &side2, &side3);
		numBigSides = side1 + side2;
		if(numBigSides<side3){
			error = true;
		}
	}while (error=false);
	if ((side1 == side2) && (side1 == side3)){
		printf("This triangle is a equilateral triangle.");	
	}
	else if((side1 == side2) || (side2 == side3) || (side1 == side3)){
		printf("This triangle is a isosceles triangle.");	
	}
	else{
		printf("This triangle is a scalene triangle.");	
	}
}
