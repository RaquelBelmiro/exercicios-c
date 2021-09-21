
#include <stdio.h>
#include <stdlib.h>


int main(){
	
	
	int x = 10, y = 10;
	
	/*
	x++;
	++y;
	*/
	
/*	y = x++;  pós incremento */
	/* y = x
       x++
	*/	
	
	y = ++x; /*pré incremento*/
	/* x++
	   y = x
	*/
	
	
	printf("x = %d \n", x);
	printf("y = %d \n", y);
	
	
	
	
	
	system("pause");
	return 0;
		
	
}
	
