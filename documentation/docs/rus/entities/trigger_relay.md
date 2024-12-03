﻿# trigger_relay

С помощью этого триггера можно активировать объект, указанный в "**Target**", в зависимости от того, включен он или выключен.

## Настройки

- **`Name`** - Имя энтити
- **`Target`** - Имя объекта, который активируется
- **`Delay before trigger`** - Время в секундах до активации объекта
- **`KillTarget`** - Имя объекта, который будет уничтожен после активации
- **`Master`** - Имя мастера для активации
- **`Target If Blocked`** - Цель, которая активируется, если объект заблокирован мастером
- **`Trigger state`** - Состояние переключения. Оно отвечает за то, как триггер будет активировать объекты
- **`Send Value`** - Позволяет перезаписать значение, которое идёт после точки в поле активации объекта (deprecated).

## Спаунфлаги

- **`Remove on fire`** - После активации, триггер будет уничтожен