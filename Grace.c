#include <stdio.h> //1
#include <fcntl.h>
#define DEF1
#define DEF2
#define LAUNCH int main(){int fd = open("./Grace_kid.c", O_WRONLY | O_CREAT, 0666);char *s = "#include <stdio.h> //1%1$c#include <fcntl.h>%1$c#define DEF1%1$c#define DEF2%1$c#define LAUNCH int main(){int fd = open(%2$c./Grace_kid.c%2$c, O_WRONLY | O_CREAT, 0666);char *s = %2$c%3$s%2$c;dprintf(fd, s, 10, 34, s);}%1$c%1$cLAUNCH%1$c";dprintf(fd, s, 10, 34, s);}

LAUNCH
