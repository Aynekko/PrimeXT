﻿# train_setspeed

Энтити для динамической смены скорости **func_tracktrain**, а также направления его движения.

## Настройки

- **`Name`**  - Имя энтити
- **`Target`** - Имя объекта, который активируется
- **`Delay before trigger`**  - Время в секундах до активации объекта
- **`KillTarget`** - Имя объекта, который будет уничтожен после активации
- **`Train Name`**  - Имя поезда, к которому будет применена новая скорость
- **`Time To New Speed`**  - Время в секундах, в течение которого скорость поезда достигнет заданной
- **`New Speed`**  - Новая скорость
- **`Speed Up Type`**  - Режим применения скорости:
 0 — мгновенное
 1 — с учётом заданного времени

## Спаунфлаги

- **`Act. train on start`** - Активировать **func_tracktrain** при запуске
- **`Debug Mssgs`** - Выводить отладочную информацию о запуске, остановке поезда и его текущей скорости в консоли

**Примечание:** Основное назначение энтити — плавно снижать скорость при подъезде к станции и так же плавно её набирать при отправлении, поскольку делать аналогичные вещи специальной расстановкой **path_track**с нужными значениями скорости крайне неудобно. Однако объект может быть использован и для более полного контроля за поездом, поскольку позволяет активировать его, останавливать и менять направление движения
