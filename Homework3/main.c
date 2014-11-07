//
//  main.c
//  Homework3
//
//  Created by Aleksandra Borovytskaya on 11/4/14.
//  Copyright (c) 2014 Aleksandra Borovytskaya. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void Multiply(int a, int b);// объявляю функцию №1 для вычисления произведения
int Sum (int a, int b); // объявляю функцию №2 для вычисления суммы
float Distance (float x1, float y1, float x2, float y2); // объявляю функцию №3 для вычисления расстояния между точками
int CheckTheDot (float x0, float y0, float xa, float ya, float r); // объявляю функцию №4 для вычисления попадает ли точка в окружность
int ChecktheSameNumbers (int a); // объявляю функцию №5 для отображения одинаковых цифр в числе
int FindtheBiggestNumber (int a); // объявляю функцию №6 для отображения самой большой и самой маленькой цифры в числе
float GetQuaterNumber (float x, float y); // объявляю функцию №7 для вычисления нахождения точки в плоскости

int PhonePrice (int a, int b, int c, int d); // объявляю функцию №8 для вычисления стоимости разговоров в месяц
int CheckTheAge (int a); //Объявляю функцию №9 для определения возрастной группы
int FindTheSum (int a, int b, int c);//Объявление функции №10 - нахождение суммы большего и меньшего из трех переданных в функцию чисел
int PositiveSum (int a, int b, int c); //Объявление функции №11, которая по заданным 3м числам определяет, является ли сумма каких либо двух из них положительной
float SwimResults (float John, float Peter, float Brian); //Объявление функции №12, отображение лучшего результата спортсмена
int CheckEven (int a); //Объявление №13, проверка заданного числа на четность



int main ()


{
    // Вызов фунции №1 Multiply
    
    
    Multiply (10, 20);
    Multiply (-10, 20);
    Multiply (0, 20);
    
    
    //Вызов функции №2 Sum
    
    int result;
    result = Sum (15, 12);
    
    printf("Результат выполнения функции Sum, %d, %x\n", result, result);
    
    
    
    // Вызов функции №3 Distance
    
    
    float DistanceResult;
    DistanceResult = Distance (1, 2, 3, 4);
    
    printf("Результат выполнения функции Distance, %f,\n", DistanceResult);
    
    
    // Вызов функции №4 CheckTheDot
    
    CheckTheDot (5, 6, 7, 8, 9);
    CheckTheDot (5, 6, 7, 8, 1);
    
    
    // Вызов функции №5 ChecktheSameNumbers
    ChecktheSameNumbers (575);
    ChecktheSameNumbers (123);
    ChecktheSameNumbers (111);
    
    
    
    // Вызов функции №6 FindtheBiggestNumber
    
    FindtheBiggestNumber (999);
    FindtheBiggestNumber (102);
    FindtheBiggestNumber (100);
    
    //Вызов функции #7 GetQuaterNumber;
    
    GetQuaterNumber (3, 4);
    GetQuaterNumber (5, -2);
    GetQuaterNumber (-1, -1);
    GetQuaterNumber (-3, 2);
    GetQuaterNumber (0, 1);
    GetQuaterNumber (1, 0);
    
    
    //Вызов функции №8 PhonePrice;
    
    int PhonePrice (int a, int b, int c, int d);
    // a - номинальное кол-во минут в месяц,
    // b - реальное количество минут в месяц,
    // с - плата за номинальное количество минут в месяц,
    // d - тариф за превышение лимита.
    
    
    
    PhonePrice (60,1,20,1);
    PhonePrice (60,70,20,1);
    PhonePrice (60,60,20,1);
    
    //Вызов функции №9 CheckTheAge;
    CheckTheAge (5);
    CheckTheAge (6);
    CheckTheAge (17);
    CheckTheAge (60);
    
    //Вызов функции №10 FindTheSum;
    FindTheSum (1, 2, 3);
    FindTheSum (4, 4, 4);
    FindTheSum (5, 5, 6);
    
    //Вызов функции №11 PositiveSum;
    PositiveSum (-1, -2, -3);
    PositiveSum (-1, -2, 3);
    PositiveSum (1, 2, 3);
    PositiveSum (0, 0, 0);
    
    
    //Вызов функции №12 SwimResults;
    SwimResults (10.5, 11.3, 9.0);
    SwimResults (16.5, 16.5, 23.19);
    SwimResults (12, 12, 12);
    
    
    //Вызов функции №13 CheckEven;
    CheckEven (4);
    CheckEven (11);
    
    
    return 0;
    
    
    
}
//Реализация фунции №1 Multiply
void Multiply (int a, int b) {
    
    printf("Результат выполнения функции Multiply, произведение чисел a=%d, b=%d равно %d\n", a, b, a*b);
    
    
}

//Реализация фунции №2 Sum

int Sum (int a, int b) {
    printf("Параметры функции Sum a=%d, b=%d\n", a, b);
    
    return a+b;
    
    
}
//Реализация фунции №3 Distance

float Distance (float x1, float y1, float x2, float y2){
    
    return sqrtf(powf(x2-x1,2)+powf(y2-y1, 2));
    
}


//Реализация функции №4 CheckTheDot

int CheckTheDot (float x0, float y0, float xa, float ya, float r){
    //    float Distance;
    //  Distance = sqrtf(powf(x0-xa,2)+powf(y0-ya, 2));
    //    if (Distance <= r) {
    if (Distance(x0, y0, xa, ya) <= r) {
        
        printf("Точка находится внутри круга.\n");
        return 1;
    }
    else {
        
        printf("Точка находится за пределами круга.\n");
        return 0;
        
    }
    
}

// Реализация функции №5 ChecktheSameNumbers

int ChecktheSameNumbers (int a) {
    int num;
    int result;
    num=a;
    
    int x1;
    x1=num%10;
    
    int x2;
    x2=((int) num/10)%10;
    
    int x3;
    x3=((int) num/100);
    
    if (x1 !=x2 &&
        x2 !=x3 &&
        x3 !=x1){
        result = 0;
        
    } else if (x1==x2 &&
               x2==x3 &&
               x3==x1){
        result = 3;
    } else if (x1 ==x2 ||
               x2 ==x3 ||
               x3 ==x1){
        result = 2;
    }
    
    printf("Количество одинаковых цифр в числе: %d.\n",result);
    return 0;
    
}

//Реализация функции №6 FindtheBiggestNumber

int FindtheBiggestNumber (int a){
    int num;
    int result;
    num = a;
    
    int x1;
    x1=num %10;
    
    int x2;
    x2=((int) num/10)%10;
    
    int x3;
    x3=((int) num/100);
    
    if (x1 >=x2 &&
        x1 >=x3){
        result = x1;
        
    } else if (x2 >= x1 &&
               x2 >= x3){
        result = x2;
    } else if (x3 >= x1 &&
               x3 >= x2){
        result = x3;
    }
    
    printf("Самое большое число в цифре: %d.\n",result);
    
    if (x1 <=x2 &&
        x1 <=x3){
        result = x1;
        
    } else if (x2 <= x1 &&
               x2 <= x3){
        result = x2;
    } else if (x3 <= x1 &&
               x3 <= x2){
        result = x3;
    }
    
    printf("Самое маленькое число в цифре: %d.\n",result);
    
    
    return 0;
    
    
}
//Реализация функции № 7 GetQuaterNumber
float GetQuaterNumber (float x, float y) {
    
    if (x>0 &&
        y>0)
        printf ("Точка находится в плоскости 1.\n");
    
    else
        
        if (x>0 &&
            y<0)
            printf ("Точка находится в плоскости 2.\n");
    
        else
            if (x<0 &&
                y<0)
                printf ("Точка находится в плоскости 3.\n");
            else
                if (x<0 &&
                    y>0)
                    printf ("Точка находится в плоскости 4.\n");
    
                else
                    if (x==0 &&
                        y!=0)
                        printf ("Точка находится на оси Y.\n");
    
                    else
                        if (x!=0 &&
                            y==0)
                            printf ("Точка находится на оси X.\n");
    return 0;
    
}

//Реализация функции №8 PhonePrice
int PhonePrice (int a, int b, int c, int d) {
    int result;
    
    if (b<=a) {
        result=b;
        printf ("Абонент потратил %d минут за месяц. Плата за телефон: %d.\n", b, c); }
    
    else {
        result=b*d;
        printf ("Абонент потратил %d минут за месяц. Плата за телефон: %d.\n", b, result);}
    
    return 0;
    
}
//Реализация функции №9 CheckTheAge

int CheckTheAge (int a) {
    if (a >0 &&
        a <6)
        printf("Возраст %d лет. Данный человек находится в группе 'Дошкольник'.\n", a);
    
    else
        if (a>=6 &&
            a<17)
            printf("Возраст %d лет. Данный человек находится в группе 'Ученик'.\n", a);
    
        else
            if (a>=17 &&
                a<60)
                printf("Возраст %d лет. Данный человек находится в группе 'Работник'.\n", a);
    
            else
                if (a>=60)
                    printf("Возраст %d лет. Данный человек находится в группе 'Пенсионер'.\n", a);
    
    return 0;
    
}
//Реализация функции №10 FindTheSum
int result1;
int result2;

int FindTheSum (int a, int b, int c) {
    
    if (c>=b &&
        c>=a)
        result1=c;
    else
        if (b>=c &&
            b>=a)
            result1=b;
        else
            if (a>=c &&
                a>=b)
                result1=a;
    
    if (c<=b&&
        c<=a)
        result2=c;
    else
        if (b<=c &&
            b<=a)
            result2=b;
        else
            if (a<=c&&
                a<=b)
                result2=a;
    printf ("Сумма наибольшего и наименьшего чисел, переданных в функцию №10: %d.\n", result1+result2);
    return 0;
    
}
//Реализация функции №11 PositiveSum
int result = 0;

int PositiveSum (int a, int b, int c) {
    
    if  (a+b>0 || a+c>0 || c+b>0) {
        
        printf("Сумма каких-либо чисел функции является положительной.\n");
        result=1;
    }
    else if (a+b<0|| a+c<0|| c+b<0)
    {
        result=-1;
        printf("Сумма каких-либо чисел функции является отрицательной.\n");
    }
    else { printf("Сумма равна нулю.\n");}
    return 0;
    
}
//Реализация функции №12 SwimResults

float SwimResults (float John, float Peter, float Brian) {
    float result1;
    float result2;
    float result3;
    float result4;
    float result5;

    

if (John<Peter && John < Brian){
    result1 = John;
    printf("Победитель:%f.\n", result1);
}
else if (Peter<John && Peter<Brian)
{
    result2=Peter;
printf("Победитель:%f.\n", result2);
}
else if (Brian<John && Brian<Peter)
{
    result3=Brian;
    printf("Победитель:%f.\n",result3);
}
else if (John==Peter && John == Brian && Brian==Peter){
    result5 = 2;
    printf("Все спортсмены пришли с одинаковым временем:%f.\n", John);
}

else if (John==Peter || John == Brian){
        result4 = 1;
        printf("Победили 2 спортсмена с результатом:%f.\n", John);
    }
    else if (Peter==John || Peter == Brian){
        result4 = 1;
        printf("Победили 2 спортсмена с результатом:%f.\n", Peter);
    }
    else if (Brian==Peter || Brian == John){
        result4 = 1;
        printf("Победили 2 спортсмена с результатом:%f.\n", Brian);
    }
        
    return 0;
}
//Реализация функции №13 CheckEven
int CheckEven (a) {
    int num;
    num=a%2;
    
    if (num==0)
    printf("Заданное число четное.\n");
else
    printf("Заданное число не четное.\n");
    return 0;
    }

