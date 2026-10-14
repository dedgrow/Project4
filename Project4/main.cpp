#include <iostream>
#include <Windows.h>
#include <cstdlib>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int chislo = 0;
    int eshe = 0;
    int vkus = 0;
    int kolichestvo = 0;
    int cena = 0;
    int frukt = 0;
    int nastoyka = 0;
    int luk = 0;
    int petrushka = 0;

    double summa = 0;
    double skidkaPetrushka = 0;
    double skidkaLuk = 0;
    double skidkaObshaya = 0;
    double itog = 0;

    while (true)
    {
        chislo = 0;
        eshe = 0;
        vkus = 0;
        kolichestvo = 0;
        cena = 0;
        frukt = 0;
        nastoyka = 0;
        luk = 0;
        petrushka = 0;

        summa = 0;
        skidkaPetrushka = 0;
        skidkaLuk = 0;
        skidkaObshaya = 0;
        itog = 0;

        while (true)
        {
            system("cls");

            std::cout << "\n\nМагазин Соки Александра\n\n";
            std::cout << "Выберите напиток\n\n";
            std::cout << "Фруктовый сок - 0\n";
            std::cout << "Овощной сок - 1\n";
            std::cout << "Чай - 2\n";
            std::cout << "Боярышник - 3\n";
            std::cout << "Завершить покупку - 4\n\n";
            std::cout << "Ввод: ";
            std::cin >> chislo;

            cena = 0;
            vkus = 0;

            if (chislo == 0)
            {
                std::cout << "\nФруктовые соки\n";
                std::cout << "1 - Яблочный - 120 руб.\n";
                std::cout << "2 - Апельсиновый - 150 руб.\n";
                std::cout << "3 - Абрикосовый - 140 руб.\n";
                std::cout << "4 - Грушевый - 130 руб.\n";
                std::cout << "0 - Назад\n";
                std::cout << "Ввод: ";
                std::cin >> vkus;

                if (vkus == 1)
                {
                    cena = 120;
                }
                else if (vkus == 2)
                {
                    cena = 150;
                }
                else if (vkus == 3)
                {
                    cena = 140;
                }
                else if (vkus == 4)
                {
                    cena = 130;
                }
                else if (vkus == 0)
                {
                    continue;
                }
                else
                {
                    std::cout << "Неверный ввод!\n";
                    Sleep(1000);
                    continue;
                }
            }
            else if (chislo == 1)
            {
                std::cout << "\nОвощные соки\n";
                std::cout << "1 - Томатный - 110 руб.\n";
                std::cout << "2 - Луковый - 90 руб.\n";
                std::cout << "3 - Огуречный - 100 руб.\n";
                std::cout << "0 - Назад\n";
                std::cout << "Ввод: ";
                std::cin >> vkus;

                if (vkus == 1)
                {
                    cena = 110;
                }
                else if (vkus == 2)
                {
                    cena = 90;
                }
                else if (vkus == 3)
                {
                    cena = 100;
                }
                else if (vkus == 0)
                {
                    continue;
                }
                else
                {
                    std::cout << "Неверный ввод!\n";
                    Sleep(1000);
                    continue;
                }
            }
            else if (chislo == 2)
            {
                std::cout << "\nЧаи\n";
                std::cout << "1 - Чесночный - 80 руб.\n";
                std::cout << "2 - Петрушевый - 70 руб.\n";
                std::cout << "0 - Назад\n";
                std::cout << "Ввод: ";
                std::cin >> vkus;

                if (vkus == 1)
                {
                    cena = 80;
                }
                else if (vkus == 2)
                {
                    cena = 70;
                }
                else if (vkus == 0)
                {
                    continue;
                }
                else
                {
                    std::cout << "Неверный ввод!\n";
                    Sleep(1000);
                    continue;
                }
            }
            else if (chislo == 3)
            {
                std::cout << "\nНастойки\n";
                std::cout << "1 - Боярышник - 200 руб.\n";
                std::cout << "0 - Назад\n";
                std::cout << "Ввод: ";
                std::cin >> vkus;

                if (vkus == 1)
                {
                    cena = 200;
                }
                else if (vkus == 0)
                {
                    continue;
                }
                else
                {
                    std::cout << "Неверный ввод!\n";
                    Sleep(1000);
                    continue;
                }
            }
            else if (chislo == 4)
            {
                break;
            }
            else
            {
                std::cout << "Неверный ввод!\n";
                Sleep(1000);
                continue;
            }

            std::cout << "\nВведите количество литров: ";
            std::cin >> kolichestvo;

            if (kolichestvo <= 0)
            {
                std::cout << "Неверное количество!\n";
                Sleep(1000);
                continue;
            }

            if (chislo == 3 && frukt > 0)
            {
                std::cout << "\nНастойку покупать нельзя!\n";
                std::cout << "У вас уже есть фруктовый сок.\n";
                Sleep(2000);
                continue;
            }
            else
            {
                if (chislo == 0)
                {
                    frukt += kolichestvo;

                    if (nastoyka > 0)
                    {
                        summa -= nastoyka * 200;
                        nastoyka = 0;

                        std::cout << "\nНастойка аннулирована!\n";
                    }
                }

                if (chislo == 1 && vkus == 2)
                {
                    luk += kolichestvo;
                }

                if (chislo == 2 && vkus == 2)
                {
                    petrushka += kolichestvo;
                }

                if (chislo == 3)
                {
                    nastoyka += kolichestvo;
                }

                summa += cena * kolichestvo;

                std::cout << "\nТовар добавлен!\n";
                std::cout << "Сумма товаров без скидок: "
                    << summa << " руб.\n";
            }

            std::cout << "\nХотите купить что-нибудь еще?\n";
            std::cout << "1 - Да\n";
            std::cout << "2 - Нет\n";
            std::cout << "Ввод: ";
            std::cin >> eshe;

            while (eshe != 1 && eshe != 2)
            {
                std::cout << "\nНеверный ввод!\n";
                std::cout << "1 - Да\n";
                std::cout << "2 - Нет\n";
                std::cout << "Ввод: ";
                std::cin >> eshe;
            }

            if (eshe == 1)
            {
                continue;
            }
            else if (eshe == 2)
            {
                break;
            }
        }

        if (petrushka >= 3)
        {
            skidkaPetrushka = petrushka * 70 * 0.05;
        }

        skidkaLuk = (luk / 4) * 90;

        itog = summa - skidkaPetrushka - skidkaLuk;

        if (itog > 1000)
        {
            skidkaObshaya = itog * 0.13;
            itog -= skidkaObshaya;
        }

        system("cls");

        std::cout << "\n\n========== ЧЕК ==========\n";

        std::cout << "Фруктового сока: "
            << frukt << " л\n";

        std::cout << "Лукового сока: "
            << luk << " л\n";

        std::cout << "Петрушевого чая: "
            << petrushka << " л\n";

        std::cout << "Настойки: "
            << nastoyka << " л\n";

        std::cout << "\nСумма без скидок: "
            << summa << " руб.\n";

        std::cout << "Скидка на петрушевый чай: "
            << skidkaPetrushka << " руб.\n";

        std::cout << "Бесплатных литров лукового сока: "
            << luk / 4 << "\n";

        std::cout << "Скидка на луковый сок: "
            << skidkaLuk << " руб.\n";

        std::cout << "Общая скидка 13%: "
            << skidkaObshaya << " руб.\n";

        std::cout << "\nИТОГО К ОПЛАТЕ: "
            << itog << " руб.\n";

        std::cout << "=========================\n";

        // Меню после чека

        std::cout << "\nСпасибо за покупку! Заходите еще!\n\n";
        std::cout << "1 - Еще сочка\n";
        std::cout << "2 - С меня хватит\n\n";
        std::cout << "Ввод: ";
        std::cin >> eshe;

        while (eshe != 1 && eshe != 2)
        {
            std::cout << "\nНеверный ввод!\n";
            std::cout << "1 - Еще сочка\n";
            std::cout << "2 - С меня хватит\n";
            std::cout << "Ввод: ";
            std::cin >> eshe;
        }

        if (eshe == 1)
        {
            system("cls");
            continue;
        }
        else if (eshe == 2)
        {
            std::cout << "\nДо свидания!\n";
            break;
        }
    }

    return 0;
}