#ifndef ELDER_SCRIPT_H
#define ELDER_SCRIPT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <utility>
#include <exception>
#include <random>
#include <functional>
#include <vector>

#ifdef _WIN32
#include <Windows.h>
#define ПРОБУДИТЬ_ДРЕВНИХ SetConsoleOutputCP(1251)
#else
#include <unistd.h>
#define ПРОБУДИТЬ_ДРЕВНИХ
#endif

// ===== СИСТЕМА СЛУЧАЙНОСТИ =====
namespace Хаос {
    inline bool звезды_сошлись() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::bernoulli_distribution distrib;
        return distrib(gen);
    }
    
    inline bool воля_хаоса() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::bernoulli_distribution distrib(0.3);
        return distrib(gen);
    }
    
    inline bool ритуал_удачи() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::bernoulli_distribution distrib(0.7);
        return distrib(gen);
    }
    
    inline int случайное_число(int максимум) {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, максимум);
        return dis(gen);
    }
}

// ===== ПРОСТЫЕ МАКРОСЫ ДЛЯ СЛУЧАЙНОСТИ =====
#define ЕСЛИ_ЗВЕЗДЫ_СОШЛИСЬ if (Хаос::звезды_сошлись())
#define ЕСЛИ_ВОЛЯ_ХАОСА if (Хаос::воля_хаоса())
#define РИТУАЛ_СЛУЧАЯ if (Хаос::ритуал_удачи())
#define СЛУЧАЙНОЕ_ЧИСЛО(макс) Хаос::случайное_число(макс)

// ===== ЗАПРЕТНЫЕ ВРАТА =====
#define ВРАТА static_assert(false, "ВРАТА В ИНЫЕ ИЗМЕРЕНИЯ ЗАПЕЧАТАНЫ!")
#define ИЗМЕРЕНИЕ static_assert(false, "ПУТЬ МЕЖДУ ИЗМЕРЕНИЯМИ ЗАКРЫТ!")
#define БЕЗДНА_ПО_УМОЛЧАНИЮ static_assert(false, "БЕЗДНА МОЛЧИТ!")

// ===== ОСНОВНЫЕ МАКРОСЫ =====
#define ВЕЛИКИЙ_ДРЕВНИЙ int main
#define ПРИЗВАТЬ using
#define НАРЕЧЬ typedef
#define БЕЗДНА std
#define ИЗРЕЧЬ std::cout
#define ВНИМАТЬ std::cin
#define ВОЗДАТЬ_ЖЕРТВУ return

#define СОВЕРШАТЬ_РИТУАЛ do
#define ПОКА_НЕ_СОЙДЕШЬ_С_УМА while
#define ДЛЯ_КАЖДОГО_ЖЕРТВОПРИНОШЕНИЯ for

#define ИНАЧЕ_ПРОКЛЯТИЕ else

#define КУЛЬТ class
#define СКРИЖАЛЬ struct
#define ПРОРОЧЕСТВО enum

#define РАЗОРВАТЬ_ПЕЧАТИ break
#define ПРОДОЛЖИТЬ_БЕЗУМИЕ continue

#define ИСТИНА_НЬЯРЛАТХОТЕПА true
#define ЛОЖЬ_КТУЛХУ false

#define БЕЗУМИЕ std::endl
#define НОВЫЙ_УЖАС new
#define УНИЧТОЖЕНИЕ delete
#define НЕПОСТИЖИМОЕ nullptr
#define НИЧТО NULL
#define СКРИЖАЛЬ_ИЗ_ПЛОТИ std::to_string
#define ШИРЬ_БЕЗУМИЯ std::setw
#define ЗАКЛЯТИЕ const
#define МОЩЬ_ЙОГ_СОТОТА std::pow
#define ПРИЗВАТЬ_ДРЕВНЕГО throw
#define БЕЗУМИЕ_ИЗ_ВНЕШНИХ_СФЕР std::exception
#define ЧИТАТЬ_НЕКРОНОМИКОН std::ifstream
#define ПИСАТЬ_НЕКРОНОМИКОН std::ofstream
#define ГРИМУАР std::fstream
#define СЛУЖИТЕЛЬ_КУЛЬТА friend
#define ПРЫЖОК_МЕЖДУ_ИЗМЕРЕНИЯМИ goto
#define ФОРМУЛА_ЗАКЛЯТИЯ template
#define ИМЯ_ДРЕВНЕГО typename
#define ЗАПРЕТНОЕ_ЗНАНИЕ private
#define ЗНАНИЕ_ДЛЯ_ПОСВЯЩЕННЫХ public
#define ТАЙНОЕ_ЗНАНИЕ protected
#define ВПЛЕТЕННОЕ_В_ПЛОТЬ inline
#define ВЕЧНЫЙ static
#define ЭТОТ_КОШМАР this
#define ПОПЫТКА_ПОСТИЧЬ try
#define ПОЙМАННОЕ_БЕЗУМИЕ catch
#define ИЗМЕРЕНИЕ_ХАОСА namespace
#define ОТКРЫТЬ_ВРАТА open
#define ЗАКРЫТЬ_ВРАТА close
#define СУЩНОСТЬ_ИЗ_ИНЫХ_МИРОВ auto
#define ПРЕОБРАЗОВАНИЕ_МАТЕРИИ static_cast
#define ВЗГЛЯД_ИЗ_ИНОГО_ИЗМЕРЕНИЯ peek
#define БЛИЗНЕЦЫ std::pair
#define СТАРШИЙ_БЛИЗНЕЦ first
#define МЛАДШИЙ_БЛИЗНЕЦ second
#define РИТУАЛ operator
#define СДВИГ_РЕАЛЬНОСТИ std::move

#define УЖАС std::exception
#define СУТЬ_УЖАСА what

#define ВРЕМЯ_ВНЕ_ВРЕМЕНИ std::time

#define ПОГЛОТИТЬ_ЗНАНИЕ std::getline
#define ДОСТОЙНЫЙ_ЖРЕЦ good
#define ПРОВАЛ_В_БЕЗУМИЕ fail
#define КОНЕЦ_ВСЕХ_ВЕЩЕЙ eof
#define БЕЗДНА_ЗАВЕРШЕНИЯ eof
#define ПОТОК_ИЗ_БЕЗДНЫ std::ostream
#define ПОТОК_В_БЕЗДНУ std::istream
#define ОБМЕН_СУЩНОСТЕЙ std::swap
#define ИЗВЛЕЧЬ_СУЩНОСТЬ get

// ===== ТИПЫ ДАННЫХ =====
ПРИЗВАТЬ ПЛОТЬ = int;
ПРИЗВАТЬ ЗНАНИЕ_ДРЕВНИХ = double;
ПРИЗВАТЬ МАЛАЯ_ЧАСТЬ_ЗНАНИЯ = float;
ПРИЗВАТЬ СИМВОЛ_ЗАКЛЯТИЯ = char;
ПРИЗВАТЬ ТЕКСТ_НЕКРОНОМИКОНА = std::string;
ПРИЗВАТЬ ПУСТОТА = void;
ПРИЗВАТЬ МАЛЫЙ_УЖАС = short;
ПРИЗВАТЬ ДРЕВНИЙ_УЖАС = long;
ПРИЗВАТЬ УЖАС_ИЗ_ГЛУБИН = long long;
ПРИЗВАТЬ МЕРА_БЕЗУМИЯ = size_t;
ПРИЗВАТЬ ИСТИНА_КТУЛХУ = bool;

ПРИЗВАТЬ НЕПОСТИЖИМАЯ_ПЛОТЬ = unsigned int;
ПРИЗВАТЬ НЕПОСТИЖИМЫЙ_СИМВОЛ = unsigned char;
ПРИЗВАТЬ НЕПОСТИЖИМЫЙ_МАЛЫЙ_УЖАС = unsigned short;
ПРИЗВАТЬ НЕПОСТИЖИМЫЙ_ДРЕВНИЙ_УЖАС = unsigned long;
ПРИЗВАТЬ НЕПОСТИЖИМЫЙ_УЖАС_ИЗ_ГЛУБИН = unsigned long long;

// ===== ПРИМЕРЫ ИСПОЛЬЗОВАНИЯ =====
/*
ЕСЛИ_ЗВЕЗДЫ_СОШЛИСЬ {
    ИЗРЕЧЬ << "Звезды благоволят!" << БЕЗУМИЕ;
}
ИНАЧЕ_ПРОКЛЯТИЕ {
    ИЗРЕЧЬ << "Проклятие!" << БЕЗУМИЕ;
}

ЕСЛИ_ВОЛЯ_ХАОСА {
    ИЗРЕЧЬ << "Хаос благоволит!" << БЕЗУМИЕ;
}

РИТУАЛ_СЛУЧАЯ {
    ИЗРЕЧЬ << "Ритуал удался!" << БЕЗУМИЕ;
}

auto число = СЛУЧАЙНОЕ_ЧИСЛО(100);
*/

ПРОРОЧЕСТВО СЧЕТ_ДРЕВНИХ{
    НАЧАЛО = 0,
    ПЕРВЫЙ_ЗНАК = 1,
    ВТОРОЙ_ЗНАК = 2,
    ТРЕТИЙ_ЗНАК = 3,
    ЧЕТВЕРТЫЙ_ЗНАК = 4,
    ПЯТЫЙ_ЗНАК = 5,
    ШЕСТОЙ_ЗНАК = 6,
    СЕДЬМОЙ_ЗНАК = 7,
    ВОСЬМОЙ_ЗНАК = 8,
    ДЕВЯТЫЙ_ЗНАК = 9,
    ЗАВЕРШЕНИЕ_ЦИКЛА = 10
};

#endif