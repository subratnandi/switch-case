#include<stdio.h>
main()
{
	int a;
printf("Pick an item -- \n1.Pizza \n2.Burger \n3.Pasta \n4.French Fries \n5.Sandwich \n What will you eaten please enter the serial number- ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("cost of pizza is Rs 239");
		case 2:
			printf("cost of Burger is Rs 129");
		case 3:
			printf("cost of pasta is Rs 179");
		case 4:
			printf("cost of french fries is Rs 99 ");
		case 5:
			printf("cost of sandwich is Rs 149 ");
	default : ("It is not mention");
	}
}
