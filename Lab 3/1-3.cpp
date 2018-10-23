#include<stdio.h>
#include<locale.h>
int main()
{
	puts("1.Russia");
	puts("2.Germany");
	puts("3.France");
	puts("4.Spain");
	puts("5.Turkey");
	puts("6.Britan");
	for(;;){
	puts("Enter country: ");
	int x;
	scanf("%d", &x);
	if(x==1)
		puts("Moscow");
	else if(x==2)
		puts("Berlin");
	else if(x==3)
		puts("Paris");
	else if(x==4)
		puts("Madrid");
	else if(x==5)
		puts("Istambul");
	else if(x==6)
		puts("London");
	else
		puts("No");	
	}
	return 0;
}
