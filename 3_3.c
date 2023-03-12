///exp 3-3 conversation sec into hr and min///
#include <stdio.h>
int main() {
	int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);
	h = (sec/3600); 
	m = (sec -(3600*h))/60;
	s = (sec -(3600*h)-(m*60));
	printf("%d hr \n%d min \n%d sec",h,m,s);
	
	return 0;
}