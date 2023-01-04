/* Напишите функцию void mySort2, которая принимает указатели на две переменные типа int x и y,
после чего кладёт в первую переменную минимум из значений переменных x и y, а во вторую — максимум.
*/
void mySort2(int *x, int *y) {
    if(*x <= *y) {
        return;
    }
    int temp = *x;
    *x = *y;
    *y = temp;
}