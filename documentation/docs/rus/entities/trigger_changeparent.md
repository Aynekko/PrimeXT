﻿# trigger_changeparent

Энтити для динамической смены родителя или откреплению от текущего.

## Настройки

- **`Name`**  - Имя энтити
- **`Target`** - энтити, которой необходимо сменить родителя или отвязаться от него
- **`Delay before trigger`** - Время в секундах до активации объекта
- **`KillTarget`** - Имя объекта, который будет уничтожен после активации
- **`New Parent (*locus)`** - Имя нового родителя (оставьте пустым, чтобы удалить текущего)

## Примечания

- В поле **New Parent** можно указать ключевое слово *locus. Тогда новым родителем энтити, указанной в поле target, станет та энтити, от которой исходила активация trigger_changeparent.
- Поскольку указатель на активатор обычно передаётся без изменений большинством энтити, то вполне возможна конструкция, когда энтити пересекает **trigger_multiple** или **trigger_once**, тот в свою очередь активирует trigger_changeparent, а тот устанавливает объекту, указанному в поле target, того родителя, который пересёк триггер. Таким образом становится возможной реализация подъёмного крана с магнитом, например. Но это далеко не единственное использование этого режима.
