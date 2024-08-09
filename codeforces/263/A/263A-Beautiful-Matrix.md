# 263A - Beautiful Matrix

Use doubly-nested `for` loops to read from the standard input. When
one of the chars is equal to `1`, calculate the number of required
moves to get the beautiful matrix according to the following formula:
```
abs(2 - current_row_index) + abs(2 - current_column_index)
```
