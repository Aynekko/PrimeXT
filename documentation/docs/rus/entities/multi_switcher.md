﻿# multi_switcher

Переключатель целей с возможностью случайного выбора цели.

## Настройки

- **`Name`** - Имя энтити
- **`Parent`** - Имя энтити, к которой будет прикреплен
- **`Target`** - Имя объекта, который активируется
- **`Master`** - Имя мастера для активации
- **`Delay`** - Скорость перебора целей в автоматическом режиме
- **`Mode`** - Способ перебора целей в автоматическом режиме (0 — вперед, 1 — назад, 2 — случайным образом)

## Спаунфлаги

- **`Start On`** - Изначально включен

## Примечания

- Поскольку обычные активации должны проследовать сквозь переключатель на выбранную цель, сам свитчер реагирует только на префиксы **`<`** и **`>`**, при помощи которых можно контролировать его работу во время игры.
- Префикс **`<`** без значения и с установленным спаунфлагом SF_SWITCHER_START_ON включает свитчер (если тот был выключен). Если же спаунфлаг SF_SWITCHER_START_ON установлен не был, то каждая последующая активация с префиксом **`<`**, но без значения, реализует пошаговое выполнение алгоритма, заданного при помощи поля mode для автоматического режима. То есть для режима **0** разовая активация с префиксом **`<`** приведет к переключению на следующую цель (без её активации), для режима **1** — на предыдущую цель (без её активации), для режима **2** цель будет выбрана случайным образом (без её активации). Активация с префиксом **`<`** и со значением позволяет немедленно переключиться на цель, номеру которой соответствует переданное значение.
- Активация с префиксом **`>`** сбросит текущую цель на самую первую и выключит автоматический перебор целей для свитчера, которому был установлен спаунфлаг SF_SWITCHER_START_ON. Повторное включение осуществляется при помощи активации с префиксом **`<`** без значения, как уже было написано выше.
- Все остальные активации передаются непосредственно на текущую цель в списке, без каких-либо изменений.