#include <fcgi_stdio.h>
int main(void) {
        while (FCGI_Accept() >= 0) {
                printf("Content-Type: text/html\r\nStatus: 200 OK\r\n\r\n");
                printf("<html><head><title>Hello World</title></head>");
                printf("<body><h1>Hello World!</h1></body></html>");
        }
        return 0;
}
