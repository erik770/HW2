# HW2
Решение второго ИЗ из курса по углубленному программированию на языке C/C++ в технопарке вк компани! лучшего технического во вселенной

### Вариант #17
Сравните и выведите в консоль время работы последовательного и параллельного с использованием нескольких процессов алгоритмов, каждый из которых выделяет в динамической памяти символьный массив размером 100 Мб и выполняет поиск самого длинного слова в тексте. Словом считается последовательность, состоящая из букв и ограниченная пробелами.

### Coverage
https://app.codecov.io/gh/erik770/HW2/commits?page=1

### Time
```
Run ./build/stress_test && ./build/stress_test_procs
average time: 0.0613759  -w/o forks
average time: 0.0006113  -with forks
```
