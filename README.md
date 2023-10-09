# Макро клава на 2 клавиши
Идея пришла из репозитория [gotchau/TwoKey_Keyboard](https://github.com/gotchau/TwoKey_Keyboard).

В этом репозитории только прошивка для [Digispark ATtiny85](https://www.ozon.ru/product/kontroller-digispark-attiny85-chernyy-plata-razrabotki-tiny85-attiny85-otladochnyy-modul-663440732/), спасибо пользователю [@Delete228](https://github.com/Delete228) за
доработку прошивки, теперь клавиши случайно не дублируют свою функцию.

## Функционал:
В данной прошивке [sketch_oct9.ino](https://github.com/c7v/two-button-macrokeypad/blob/master/sketch_oct9.ino) содержится три функции на две клавиши:

* Клавиша **A** — `CTRL+C`.
* Клавиша **B** — `CTRL+V`.
* Клавиши **A + B** — `CTRL+A`.

## Результат сборки и нюансы:

Модель для 3D печати взята из репозитория [gotchau/TwoKey_Keyboard](https://github.com/gotchau/TwoKey_Keyboard).

* Автор рекомендовал болты М4, берите смелом М5 поскольку для меня М4 оказался маленьким, модель не редактировал.
* Автор в [видео](https://www.youtube.com/watch?v=BGkTiVP5ryY) рекомендовал зелёный провод USB data + паять к USB- на плате, а белый USB- к USB+ на плате. **ДА, так и надо делать.** И если Вы все делаете на Windows 10 и у Вас постоянно то появляется устройство USB data +то пропадает и так безконечно, то у Вас проблемы с драйверами.

![изображение](https://github.com/c7v/two-button-macrokeypad/assets/50216354/c9e72456-dcc2-4603-926b-f81b50c546d4)

