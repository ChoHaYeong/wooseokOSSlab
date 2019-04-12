#include <stdio.h>

void sub1();
void sub2();
void sub3();

int main(void)
{
	sub1();
	sub2();
	sub3();
	return 0;
}

void sub1(){
	printf("안녕하세요 저는 최우석입니다.");
}

void sub3(){
	puts("00");
}
