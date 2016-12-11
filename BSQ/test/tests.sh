clear
echo "====Базовая проверка работы с файлом:===="
cat -e 01.txt
./bsq 01.txt
read -n 1 -p "Press any key to continue"
clear
echo "====Базовая проверка работы с двумя файлами:===="
./bsq 01.txt 06.txt
read -n 1 -p "Press any key to continue"
clear
echo "====Чтение данных через пайп===="
./mapgen.pl 20 20 2 | ./bsq
read -n 1 -p "Press any key to continue"
clear
echo "====Чтение данных из консоли===="
./bsq
read -n 1 -p "Press any key to continue"
clear
echo "====Файл, где c_empty --- цифра ===="
cat -e 02.txt
./bsq 02.txt
read -n 1 -p "Press any key to continue"
clear
echo "==== Проверка, компилится ли мейкфайл ===="
make re
read -n 1 -p "Press any key to continue"
clear
echo "==== Мейкфайл не должен перекомпилится, если код не менялся ===="
make
read -n 1 -p "Press any key to continue"
clear
echo "==== Заполняться должен верхний квадрат ===="
cat -e 03.txt
./bsq 03.txt
read -n 1 -p "Press any key to continue"
clear
echo "==== Заполняться должен левый квадрат ===="
cat -e 04.txt
./bsq 04.txt
read -n 1 -p "Press any key to continue"
clear
echo "==== Строки неодинаковой длины: map error ===="
cat -e 05.txt
./bsq 05.txt
read -n 1 -p "Press any key to continue"
clear
echo "==== В конце последней строки нету ньюлайна: map error ===="
cat -e 07.txt
./bsq 07.txt
read -n 1 -p "Press any key to continue"
clear
echo "==== В файле попалась посторонняя буква А: map error ===="
cat -e 08.txt
./bsq 08.txt
read -n 1 -p "Press any key to continue"
clear
echo "==== Файл, в котором нестандартные символы empty, obstacle, full ===="
cat -e 09.txt
./bsq 09.txt
read -n 1 -p "Press any key to continue"
clear
echo "==== Корректный файл с неправдивым количеством строк: map error ===="
cat -e 10.txt
./bsq 10.txt
read -n 1 -p "Press any key to continue"
clear
echo "==== Поле только из empty: должно работать ===="
./mapgen.pl 20 30 0 |./bsq
read -n 1 -p "Press any key to continue"
clear
echo "==== Поле в один столбец: должно работать ===="
./mapgen.pl 1 5 1 |./bsq
read -n 1 -p "Press any key to continue"
clear
echo "==== Поле в одну строку: должно работать ===="
./mapgen.pl 5 1 1 |./bsq
read -n 1 -p "Press any key to continue"
clear
echo "==== Поле в ноль столбцов: map error ===="
./mapgen.pl 0 5 1 |./bsq
read -n 1 -p "Press any key to continue"
clear
echo "==== Поле в ноль строк: map error ===="
./mapgen.pl 5 0 1 |./bsq
read -n 1 -p "Press any key to continue"
clear
echo "==== Пустой ввод: не должно быть seg_fault ===="
mapgen |./bsq
read -n 1 -p "Press any key to continue"
clear
echo "==== Просмотр содержимого auteur ===="
cat auteur
read -n 1 -p "Press any key to continue"
clear
echo "==== Тест на быстродействие: у нас 0,038 сек ===="
time ./mapgen.pl 1000 1000 2 | ./bsq
read -n 1 -p "Press any key to continue"
clear
echo "==== Тест на быстродействие: у нас 1,38 сек ===="
time ./mapgen.pl 2000 2000 2 | ./bsq
read -n 1 -p "Press any key to continue"
clear
echo "==== Тест на быстродействие: у нас 3,7 сек ===="
time ./mapgen.pl 3000 3000 2 | ./bsq
read -n 1 -p "Press any key to continue"
