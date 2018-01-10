#include <stdio.h>
void func(){}
//1
int main()
{ //2
	func();
	char *s = "#include <stdio.h>%1$cvoid func(){}%1$c//1%1$cint main()%1$c{ //2%1$c%2$cfunc();%1$c%2$cchar *s = %3$c%4$s%3$c;%1$c%2$cprintf(s, 10, 9, 34, s);%1$c}%1$c";
	printf(s, 10, 9, 34, s);
}
