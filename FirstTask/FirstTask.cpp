// FirstTask.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*#include <stdio.h>
#include <iostream>
#include <conio.h>*/

#include <iostream>
#include <conio.h>
#include <iso646.h>
#include <cstring>
#include <cstdio>
#include <stdio.h>
#include <string>
#include <windows.h>

using namespace std;

void first();
void second();
void third();
void fourth();
void fifth();
void sixth();
void seventh();

void thirdTrue();
int main()
{
    setlocale(LC_ALL, "Rus");
    //first();
    //second();
    //third();
    //thirdTrue();
    //fourth();
    //fifth();
    //sixth();
   //seventh();
    //Убираешь комм нужного метода и смотри результат
    _getch();
}
void first()
{
    
    printf("Мусаев\nМадияр\nНурланулы\n");
    printf("Для завершения нажмите <Enter>");

}
void second()
{   
    printf("Current directory\nCurrent file\nExtended memory usage\nExpanded memory usage\nLines compiled\nTotal warnings\nTotal errrors\nTotal time\nProgram loaded\nProgram exit");  
        
}

void third() 
{
    //clrscr не работает
    system("cls");
    //textcolor не работает тоже на VS
    
    printf("Каждый \n\r"); system("color 04");
    
    printf("охотник \n\r"); system("color 0C");
    
    printf("желает \n\r"); system("color 0E");
    
    printf("знать \n\r"); system("color 02");
    
    printf("где \n\r"); system("color 09");
    
    printf("сидят \n\r"); system("color 01");
    
    printf("фазаны \n\r"); system("color 05");
    system("color 07");
    printf("\nДля завершения нажмите <Enter>");
}
void thirdTrue()
{
    system("cls");

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h, 4);
    cout << ("Каждый \r") << endl;
    
    SetConsoleTextAttribute(h, 12);
    cout << ("охотник \r") << endl;
    
    SetConsoleTextAttribute(h, 14);
    cout << ("желает \r") << endl;
    
    SetConsoleTextAttribute(h, 2);
    cout << ("знать \r") << endl;
    
    SetConsoleTextAttribute(h, 9);
    cout << ("где \r") << endl;
    
    SetConsoleTextAttribute(h, 1);
    cout << ("сидят \r") << endl;
    
    SetConsoleTextAttribute(h, 5);
    cout << ("фазаны \r") << endl;
    
    SetConsoleTextAttribute(h, 7);
    printf("\nДля завершения нажмите <Enter>");

}

void fourth()
{
    float l, w;//длина и ширина прямоугольника
    float s; //площадь прямоугольника
    printf("\nВычисление площади прямоугольника\n");
    printf("Введите исходные данные:\n");
    printf("Длина (см)->"); scanf_s("%f", &l);
    printf("Ширина (см)->"); scanf_s("%f", &w);
    s = l * w;
    printf("Площадь прямоугольника: %10.2fкв. см\n",s);
    printf("\n\nДля завершения нажмите <Enter>");
}
void fifth() 
{
    //S = a*h
    float a, h;//Параллельограмм жағы және биіктігі
    float S; //Параллельограмм ауданы
    printf("\nПараллельограмм ауданын есептеу\n");
    printf("Бастапкы акпараттарды енгизиниз:\n");
    printf("Жагы (см)->"); scanf_s("%f", &a);
    printf("Би1кт1г1 (см)->"); scanf_s("%f", &h);
    S = a * h;
    printf("Параллельограмма ауданы: %10.2fкв. см\n",S);
    printf("\n\nДля завершения нажмите <Enter>");
}
void sixth()
{
    float r, h, v;
    printf("Вычисление объема цилиндра\n");
    printf("Введите исходные данные:\n");
    printf("Радиус основания (см) -> ");
    scanf_s("%f", &r);
    printf("Высота цилиндра (см) -> ");
    scanf_s("%f", &h);
    v = 2 * 3.1415926 * r * r * h;
    printf("\nОбъем цилиндра %6.2f куб. см\n", v);
    printf("\nДля завершения нажмите <Enter>");
}
void seventh()
{
    float kar, tetr; // цена карандаша и тетради
    int nk, nt; // количество тетрадей и карандашей 
    float summ; // стоимость покупки
    printf("\nВычисление стоимости покупки\n");
    printf("Введите исходные данные:\n");
    printf("Цена тетради (тнг.) -> ");
    scanf_s("%f", &tetr);
    printf("Количество тетрадей -> ");
    scanf_s("%i", &nt);
    printf("Цена карандаша (тнг.) -> ");
    scanf_s("%f", &kar);
    printf("Количество карандашей -> ");
    scanf_s("%i", &nk);
    summ = tetr * nt + kar * nk;
    printf("\nСтоимость покупки: %6.2f тнг.\n", summ);
    printf("\nДля завершения нажмите <Enter>");

}
