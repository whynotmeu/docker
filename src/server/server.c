#include <fcgi_stdio.h>   // Подключение станд библиотеки FastCGI

int main(void) {    // Главная функция программы
    while (FCGI_Accept() >= 0) {  // ждёт новый HTTP-запрос
        printf("Content-type: text/html\r\n\r\n");  // заголовок HTTP, обязательно для браузера
        printf("<html><body><h1>Hello World!</h1></body></html>\n");  // то, что увидит пользователь
    }  // цикл while-сервер работает постоянно и не закрывается после одного запроса
    return 0; // Завершаем программу
}
