 #include <stdio.h>

int main()
{
    char input;
choice:
    printf("Добрий день!");
    printf("Бажаєте запустити код? (y/n): ");
    scanf(" %s", &input);
    if (input == 'y')
    {
        goto method;
    }
    else if (input == 'n')
    {
        printf("Код призупинений.");
        return 0;
    }
    else
    {
        printf("Невірний вибір,спробуйте ще раз.\n");
        goto choice;
    }
method:
{
    char input;
    printf("s - з короткою умовою; f- з повною умовою; \n");
    printf("Як бажаєте вирішити? Щоб повернутися - напишіть  return. (s/f/return): ");
    scanf(" %s", &input);
    if (input == 's')
    {
        goto code_2;
    }
    else if (input == 'f')
    {
        goto code_1;
    }
    else if (input == 'return')
    {
        goto choice;
    }
    else
    {
        printf("Невірно,спробуйте ще раз.\n");
        goto method;
    }
}

code_1:
{
    float x, result;

    printf("Введіть число x: ");
    scanf("%f", &x);

    if (x < -10)
        result = 3 * x * x * x - x * x;
    else if (x <= 10)
        result = 10 - x;
    else
        result = 2 * x + 1;

    printf("f(x) = %.2f\n", result);
goto choice;
}
code_2:
{
    float x, result;

    printf("Введіть число x: ");
    scanf("%f", &x);

    if (x < -10)
        result = 3 * x * x * x - x * x;
    else {
        if (x <= 10)
            result = 10 - x;
        else
            result = 2 * x + 1;
    }

    printf("f(x) = %.2f\n", result);
  goto choice;
}
}
