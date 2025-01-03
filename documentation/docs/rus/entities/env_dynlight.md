﻿# env_dynlight

Динамический источник света. Может работать как в режиме прожектора с определенным углом рассеивания света (*spot light*), так и в качестве всенаправленного источника света (*omnidirectional light*).

Также, позволяет проецировать текстуры и видеоролики на различные поверхности, что может использоваться, например, для реализации кинопроектора. Про поддерживаемые видеоформаты можно прочитать в описании [func_screenmovie](./func_screenmovie.md).

## Настройки

- **`Name`** - Имя источника света
- **`Parent`** - Имя объекта, за которым будет следовать источник
- **`Light Color`** - Цвет света (в формате R G B)
- **`Light Distance`** - Радиус свечения (в юнитах)
- **`Brightness`** - Яркость света
- **`Cutoff Angle`** - Угол рассеивания света (в градусах)
- **`Texture`** - Название проецируемой текстуры
- **`Media file`** - Путь до проецируемого видеофайла, относительно папки `media/`

:::tip Примечание
Чтобы сделать источник света всенаправленным, нужно выставить значение `0` для параметра `Cutoff Angle`
:::

:::danger Важный момент
Во избежание артефактов желательно не выставлять значение выше чем 170 градусов для параметра `Cutoff Angle`
:::

## Спаунфлаги

- **`Start Off`** - Источник света появляется изначально выключенным
- **`Disable Shadows`** - Отключает тени от этого источника
- **`Disable Bump`** - Отключает карты нормали от этого источника

## Производительность

Влияние источника света на производительность игры сильно зависит от его настроек. Например, использование теней негативно влияет на производительность. Ниже перечислены конфигурации источников света, в порядке убывания их влияния на FPS.

1. Всенаправленный источник света с тенями, по вычислительной сложности примерно равен шести прожекторам (*spot light*) с тенями
2. Прожектор с использованием теней
3. Прожектор без использования теней / всенаправленный источник света без теней

:::danger Использование всенаправленных источников света
Перед использованием всенаправленного источника света с тенями, убедитесь, что он вам действительно нужен, так как источники такого типа довольно сильно влияют на производительности сцены, и следует при возможности избегать их использования. В некоторых случаях можно заменить всенаправленный источник на прожектор с большим (>120 градусов) углом рассеивания света.
:::

## Примечания

- При проецировании видеофайла, его воспроизведение будет зацикленным. У энтити нет настроек, чтобы повлиять на данное поведение (по крайней мере, пока)
- Источник света можно закреплять при помощи parent-системы
- Цвет источника можно настраивать при помощи *rendercolor*
