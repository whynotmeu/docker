## Part 1. Готовый докер

- Пункт 1: docker pull nginx
  - Описание результата
  - Скриншот: скачивание докер-образа nginx
![docker pull nginx](screenshots/docker_pull.png)
- Пункт 2: docker images
  - Проверка наличия докер-образа
  - Скриншот: список образов
![docker images](screenshots/docker_images.png)
- Пункт 3: docker run -d nginx
  - Запуск докер-контейнера
  - Скриншот: запуск докер-контейнера
![docker run nginx](screenshots/docker_run.png)
- Пункт 4: docker ps
  - Проверка, что контейнер запущен
  - Скриншот: запущенный контейнер
![docker ps](screenshots/docker_ps1.png)
- Пункт 5: docker inspect
  - Размер контейнера: 2290
  - IP контейнера: 172.17.0.2
  - Замапленные порты: 80/tcp: null
  - Скриншот: вывод команды `docker inspect`
![docker inspect](screenshots/docker_inspect.png)
  - Скриншот: информация о контейнере
![docker ports](screenshots/ports_size.png)
- Пункт 6: docker stop
  - Остановка контейнера
  - Скриншот: остановки контейнера
    
![docker stop](screenshots/docker_stop.png)
- Пункт 7: docker ps
  - Проверка остановки
  - Скриншот: ввод команды `docker ps`
![docker ps stopped](screenshots/docker_ps2.png)
- Пункт 8: docker run с портами
  - Проброс портов 80 и 443, использована команда `docker run -d -p 80:80 -p 443:443 nginx`
  - Скриншот: ввод команды `docker run`
![docker run ports](screenshots/docker_run.png)
- Пункт 9: Проверка nginx в браузере
  - Адрес: http://localhost:80
  - Скриншот: стартовая страница nginx
![nginx browser](screenshots/nginx.png)
- Пункт 10: docker restart
  - Перезапуск контейнера
  - Скриншот: ввод команды `docker restart`
    
![docker restart](screenshots/docker_restart.png)
- Пункт 11: Проверка запуска любым способом
  - Проверка командой `docker ps`
  - Скриншот: вывод команды `docker ps`
![docker ps after restart](screenshots/docker_ps3.png)
