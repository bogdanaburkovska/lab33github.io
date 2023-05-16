 #include <stdio.h> //введення бібліотек
#include <locale.h>
#include <math.h>

int main() {
   int num1, num2, num3;

   printf("Введіть три цілі числа: ");
   scanf("%d %d %d", &num1, &num2, &num3);//Програма запитує три цілі числа,і порівнює їх

   if (num1 <= num2 && num1 <= num3)//за допомогою if конструкції виводить на екран найменше з них.
      printf("%d найменше", num1);//Якщо два або всі три числа мають однакове значення, програма виведе будь-яке з них як найменше.
   else if (num2 <= num1 && num2 <= num3)
      printf("%d найменше", num2);
   else
      printf("%d найменше", num3);

   return 0;
}
