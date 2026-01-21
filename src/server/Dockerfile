FROM ubuntu:22.04 #используем чистый Ubuntu как базу
RUN apt-get update && apt-get install -y \ #устанавливаем компилятор, FastCGI и nginx
    gcc \
    libfcgi-dev \
    spawn-fcgi \
    nginx \
    && rm -rf /var/lib/apt/lists/*
COPY server.c /app/server.c #копируем исходник сервера внутрь контейнера
COPY nginx/nginx.conf /etc/nginx/nginx.conf #копируем конфиг nginx
RUN gcc -o /app/server /app/server.c -lfcgi #компилируем сервер внутри контейнера
CMD bash -c "spawn-fcgi -p 8080 /app/server && nginx -g 'daemon off;'" #запускаем одновременно сервер и nginx, чтобы контейнер не закрылся
