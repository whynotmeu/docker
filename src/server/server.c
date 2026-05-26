#include <fcgi_stdio.h>
int main(void)
{
    while (FCGI_Accept() >= 0)
    {
        printf("Content-Type: text/html\r\n");
        printf("\r\n");
        printf("Hello World!\n");
    }
    return 0;
}
