﻿# func_button

Брашевая энтити, представляет собой кнопку, которую можно использовать для активации других объектов (например, для открытия дверей).
При нажатии кнопка двигается в сторону, указанную в поле "Angle" на расстояние равное своей толщине.

## Настройки

- **`Global Entity Name`** - Имя глобальной энтити
- **`Name`** - Имя энтити
- **`Target`** - Имя объекта, который активируется
- **`Parent`** -  Имя энтити, к которой будет прикреплен
- **`Reflection`** - Тип отражения энтити в зеркалах
- **`Render FX`** - Тип визуального эффекта для модели
- **`FX Amount`** - Уровень прозрачности (0 - прозрачна, 255 - непрозрачна)
- **`FX Color`** - Цвет модели, накладываемый поверх текстуры
- **`Topcolor & Bottomcolor`** - Цвет верха и цвет низа из палитры
- **`ZHLT Lightflags`** - Флаги освещения для компилятора карт
- **`Light Origin Target`** - Источник направления света
- **`Invisible`** - Вкл/выкл видимость браша
- **`Non Solid`** - Вкл/выкл коллизию браша
- **`Speed`** - Скорость, с которой кнопка движется при нажатии, по умолчанию 5 (не работает при установленном флаге "Don't move")
- **`Health`** - Прочность" кнопки, по умолчанию 1. Чтобы кнопку можно было нажать выстрелив в нее, поставьте значение большее 0. Кнопка нажмется после того, как уровень повреждений превысит указанное значение
- **`Lip`** - Если необходимо, чтобы при нажатии кнопка сдвигалась дальше или наоборот ближе, чем на расстояние своей толщины, то укажите здесь необходимое количество юнитов для дополнительного сдвига. Возможно как положительное, так и отрицательное значение
- **`Master`** - Имя объекта multisource
- **`Sounds`** - Звук при нажатии
- **`Delay before reset`** - Время в секундах, в течении которого кнопка не может быть нажата повторно. По истечении этого времени кнопку вновь можно нажимать (поставьте значение "-1", чтобы кнопку можно было нажать только 1 раз)
- **`Delay before trigger`** - Время в секундах от нажатия на кнопку до активации объекта, указанного в "Target"
- **`Locked sound`** - Звук заблокированной кнопки
- **`Unlocked sound`** - Звук разблокировки
- **`Locked sentence`** - Звук при блокировке
- **`Unlocked sentence`** - Звук при разблокировки
- **`Minimum Light level`** - Минимальный уровень освещения

## Спаунфлаги

- **`Don't mover`** - Если отмечено, то при нажатии кнопка остается неподвижной и при этом мгновенно сработает
- **`OnlyDirect`** - Активация кнопки только с одной стороны
- **`Toggle`** - После нажатия кнопка останется вдавленной, чтобы отжать - надо еще раз нажать
- **`Sparks`** - Если кнопка не активна, то из нее будут в разные стороны сыпать искры
- **`Only Laser`** - Кнопка активируется только попаданием на неё лазером
- **`Touch activates`** - Кнопка нажимается касанием