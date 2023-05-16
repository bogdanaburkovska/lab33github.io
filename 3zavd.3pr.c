 #include <stdio.h> 
#include <locale.h>
#include <math.h>

int main() {
    int episode_number;
    printf("Введіть номер епізоду: ");//запитуємо користувача про номер серії, яку він хоче перевірити.
    scanf("%d", &episode_number);

    switch (episode_number) {
        case 1:
            printf("Епізод 1: Вибрані\n");
            printf("Дата прем'єри: 17 червня, 2020\n");
            break;
        case 2:
            printf("Епізод 2:Підйом\n");
            printf("Дата прем'єри:17 червня, 2020\n");
            break;
        case 3:
            printf("Епізод 3: Переговори\n");
            printf("Дата прем'єри:24 червня, 2020\n");
            break;
        case 4:
            printf("Епізод 4: Пакт\n");
            printf("Дата прем'єри:24 червня, 2020\n");
            break;
        case 5:
            printf("Епізод 5: Серце міста\n");
            printf("Дата прем'єри:1 липня, 2020\n");
            break;
        case 6:
            printf("Епізод 6: Лабіринт\n");
            printf("Дата прем'єри:1 липня, 2020\n");
            break;
        case 7:
            printf("Епізод 7:Брудна війна\n");
            printf("Дата прем'єри:8 липня, 2020\n");
            break;
        case 8:
            printf("Епізод 8:Стратегія страху\n");
            printf("Дата прем'єри:8 липня, 2020\n");
            break;
        case 9:
            printf("Епізод 9:Зізнання\n");
            printf("Дата прем'єри:15 липня, 2020\n");
            break;
        case 10:
            printf("Епізод 10:Результат\n");
            printf("Дата прем'єри:15 липня, 2020\n");
            break;
        default:
            printf("Такого епізоду не існує\n");//Якщо номер серії не відповідає жодному з варіантів, ми виводимо повідомлення про недійсний номер.
            break;
    }

    return 0;
}
