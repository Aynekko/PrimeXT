﻿# trigger_camera

Объект позволяет поставить на карту камеру, через которую активировавший ее игрок, сможет смотреть на заранее определенные участки карты.

## Настройки

- **`Target`** - Имя объекта, на который будет направлен взгляд камеры (мишень). Мишенью может быть любой объект, имеющий имя. Обычно для этих целей используется объект **info_target**
- **`Delay before trigger`** - Время в секундах до уничтожения объекта **KillTarget**
- **`KillTarget`** - Сюда можно вписать имя объекта, который будет уничтожен после первой активации камеры
- **`Name`** - Имя энтити
- **`Entity To View From`** - Название энтити, из позиции которой будет снимать камера
- **`Hold time`** - Время в секундах, на протяжении которого игрок будет видеть изображение с камеры
- **`Path Corner`** - Имя первого объекта path_corner (нужно для движущейся камеры)
- **`Initial speed`** - Начальная скорость движения камеры (нужно для движущейся камеры)
- **`Acceleration units/sec^2`** - Ускорение движения камеры, юнитов в секунду
- **`Stop deceleration units/sec^2`** - Торможение камеры перед окончанием движения, юнитов в секунду

## Спаунфлаги

- **`Start at player`** - Камера начнет движение от глаз игрока
- **`Follow player`** - Камера будет следить за игроком
- **`Freeze player`** - Игрок не сможет двигаться используя камеру
