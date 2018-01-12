#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	(void)ac;
	int i = 2147483647;
	char *fname[18];
	char *exname[16];

	if (i <= 0)
		return (0);
	if (!(strcmp(av[0], "./Sully")) && strlen(av[0]) == 7){
		sprintf((char*)fname, "Sully_%d.c", i);
		sprintf((char*)exname, "Sully_%d", i);}
	else{
		sprintf((char*)fname, "Sully_%d.c", i - 1);
		sprintf((char*)exname, "Sully_%d", i - 1);}
	int fd = open((char*)fname, O_WRONLY | O_CREAT, 0777);
	char *s = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c#include <fcntl.h>%1$c%1$cint main(int ac, char **av)%1$c{%1$c%2$c(void)ac;%1$c%2$cint i = %6$d;%1$c%2$cchar *fname[18];%1$c%2$cchar *exname[16];%1$c%1$c%2$cif (i <= 0)%1$c%2$c%2$creturn (0);%1$c%2$cif (!(strcmp(av[0], %3$c./Sully%3$c)) && strlen(av[0]) == 7){%1$c%2$c%2$csprintf((char*)fname, %3$cSully_%5$cd.c%3$c, i);%1$c%2$c%2$csprintf((char*)exname, %3$cSully_%5$cd%3$c, i);}%1$c%2$celse{%1$c%2$c%2$csprintf((char*)fname, %3$cSully_%5$cd.c%3$c, i - 1);%1$c%2$c%2$csprintf((char*)exname, %3$cSully_%5$cd%3$c, i - 1);}%1$c%2$cint fd = open((char*)fname, O_WRONLY | O_CREAT, 0777);%1$c%2$cchar *s = %3$c%4$s%3$c;%1$c%2$cif (!(strcmp(av[0], %3$c./Sully%3$c)) && strlen(av[0]) == 7)%1$c%2$c%2$cdprintf(fd, s, 10, 9, 34, s, 37, i);%1$c%2$celse%1$c%2$c%2$cdprintf(fd, s, 10, 9, 34, s, 37, i - 1);%1$c%2$cchar *cmd[46];%1$c%2$csprintf((char*)cmd, %3$cclang -o %5$c2$s %5$c1$s; ./%5$c2$s%3$c, (char*)fname, (char*)exname);%1$c%2$csystem((char*)cmd);%1$c}%1$c";
	if (!(strcmp(av[0], "./Sully")) && strlen(av[0]) == 7)
		dprintf(fd, s, 10, 9, 34, s, 37, i);
	else
		dprintf(fd, s, 10, 9, 34, s, 37, i - 1);
	char *cmd[46];
	sprintf((char*)cmd, "clang -o %2$s %1$s; ./%2$s", (char*)fname, (char*)exname);
	system((char*)cmd);
}
