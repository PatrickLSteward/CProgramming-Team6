#include <stdio.h>

int max_value();

int hello_v() {
   printf("Welcome Team6.!");
   max_value();

   return 0;
}

/* function to find the maximum value from a list of number*/
int max_value()
{

int list[10] = {2,3,4,5,6,1,19,25,4,15};
int max_value = 0;

for(int j=0;j<10;j++)
{
	if(max_value < list[j])
	{
		max_value = list[j];
	}
}

printf("The Maximum value in the list is %d",max_value);

return max_value;

}
