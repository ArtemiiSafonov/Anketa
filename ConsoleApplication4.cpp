﻿#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    vector<string>questions = { "Укажите ваш возраст ", "Укажите ваш пол (М = 1/Ж = 0) ", "Укажите ваше образование(начальное = 0, среднее = 1, высшее = 2) " };
    string a = "Есть ли у вас вредные привычки? Да = 1, Нет = 0: ";
    int k, s, v = 0, n = 0, m = 0, b, e, g, l;
    vector<int>mstsor = {}; // ответы на вопрос сколько лет
    vector<int>otvvop = {}; // ответ на вопрос анкеты пол
    vector<int>otvobr = {}; // ответ на вопрос образование
    vector<int>otvoank = {}; // ответ на вопрос привычек

    while (true) {
        cout << "Меню" << endl;
        cout << "1.Пройти тестирование" << endl;
        cout << "2.Перейти к результатам" << endl;
        cout << "3.Завершить работу программы" << endl;
        cin >> l;
        while (l != 1 && l != 2 && l != 3) {
            cout << "Введите данные корректно!: ";
            cin >> l;
            if (std::cin.fail()) {
                std::cout << "Выбранный пункт может быть только в виде числа.";
                exit(0);
            }
        }


        if (l == 1) {
            while (true) {
                cout << questions[0];
                cin >> k;
                while (k <= 0) {
                    cout << "Введите данные корректно!: ";
                    cin >> k;
                    if (std::cin.fail()) {
                        std::cout << "Выбранный пункт может быть только в виде числа.";
                        exit(0);
                    }
                }
                mstsor.push_back(k);
                cout << questions[1];
                cin >> b;
                while (b != 0 && b != 1) {
                    cout << "Введите данные корректно!: ";
                    cin >> b;
                    if (std::cin.fail()) {
                        std::cout << "Выбранный пункт может быть только в виде числа.";
                        exit(0);
                    }
                }
                otvvop.push_back(b);
                cout << questions[2];
                cin >> e;
                while (e != 0 && e != 1 && e != 2) {
                    cout << "Введите данные корректно!: ";
                    cin >> e;
                    if (std::cin.fail()) {
                        std::cout << "Выбранный пункт может быть только в виде числа.";
                        exit(0);
                    }
                }
                otvobr.push_back(e);
                cout << a;
                cin >> g;
                while (g != 0 && g != 1) {
                    cout << "Введите данные корректно!: ";
                    cin >> g;
                    if (std::cin.fail()) {
                        std::cout << "Выбранный пункт может быть только в виде числа.";
                        exit(0);
                    }
                }
                otvoank.push_back(g);
                if (k > 40 && b == 1 && e == 2 && g == 1)
                    v++;
                if (k < 30 && b == 0 && e == 1 && g == 0)
                    n++;
                if (k < 25 && b == 1 && e == 0 && g == 1)
                    m++;
                cout << "Перейти к итогам(да = 1/нет = 0)? ";
                cin >> s;
                while (s != 0 && s != 1) {
                    cout << "Введите данные корректно!: ";
                    cin >> s;
                    if (std::cin.fail()) {
                        std::cout << "Выбранный пункт может быть только в виде числа.";
                        exit(0);
                    }
                }
                if (s != 0)
                    cout << "Начнем следующий тест";
                    break;

            }
            cout << "Анкеты:  1 значение возраст, 2 значение пол(1-мужской,0-женский), 3 значение образование(0-начальное,1-среднее,2-высшее) \n"
                "4 значение ответ на вопрос (0-нет,1-да)" << endl;
            for (int i = 0; i < mstsor.size(); i++) {
                cout << mstsor.at(i) << " " << otvvop[i] << " " << otvobr.at(i) << " " << otvoank.at(i) << endl;

            }
            cout << "Мужчин старше 40 лет, имеющих высшее образование, ответили ДА на вопрос анкеты" << " " << v << endl;
            cout << "Женщин моложе 30 лет, имеющих среднее образование, ответили НЕТ на вопрос анкеты" << " " << n << endl;
            cout << "Мужчин моложе 25 лет, имеющих начальное образование, ответили ДА на вопрос анкеты" << " " << m << endl;
        }
        if (l == 2) {
            cout << "Анкеты:  1 значение возраст, 2 значение пол(1-мужской,0-женский), 3 значение образование(0-начальное,1-среднее,2-высшее) \n"
                "4 значение ответ на вопрос (0-нет,1-да)" << endl;
            for (int i = 0; i < mstsor.size(); i++) {
                cout << mstsor.at(i) << " " << otvvop[i] << " " << otvobr.at(i) << " " << otvoank.at(i) << endl;

            }
            cout << "Мужчин старше 40 лет, имеющих высшее образование, ответили ДА на вопрос анкеты" << " " << v << endl;
            cout << "Женщин моложе 30 лет, имеющих среднее образование, ответили НЕТ на вопрос анкеты" << " " << n << endl;
            cout << "Мужчин моложе 25 лет, имеющих начальное образование, ответили ДА на вопрос анкеты" << " " << m << endl;

        }
        if (l == 3) {
            return 0;
        }
        
    }
    return 0;





}

