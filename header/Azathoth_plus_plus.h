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
#define AWAKEN_THE_ANCIENTS SetConsoleOutputCP(1251)
#else
#include <unistd.h>
#define AWAKEN_THE_ANCIENTS
#endif

// ===== RANDOMNESS SYSTEM =====
namespace Chaos {
    inline bool stars_aligned() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::bernoulli_distribution distrib;
        return distrib(gen);
    }
    
    inline bool will_of_chaos() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::bernoulli_distribution distrib(0.3);
        return distrib(gen);
    }
    
    inline bool luck_ritual() {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        static std::bernoulli_distribution distrib(0.7);
        return distrib(gen);
    }
    
    inline int random_number(int maximum) {
        static std::random_device rd;
        static std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, maximum);
        return dis(gen);
    }
}

// ===== SIMPLE RANDOMNESS MACROS =====
#define IF_STARS_ALIGNED if (Chaos::stars_aligned())
#define IF_WILL_OF_CHAOS if (Chaos::will_of_chaos())
#define RITUAL_OF_CHANCE if (Chaos::luck_ritual())
#define RANDOM_NUMBER(max) Chaos::random_number(max)

// ===== FORBIDDEN GATES =====
#define GATES static_assert(false, "GATES TO OTHER DIMENSIONS ARE SEALED!")
#define DIMENSION static_assert(false, "PATH BETWEEN DIMENSIONS IS CLOSED!")
#define DEFAULT_ABYSS static_assert(false, "THE ABYSS IS SILENT!")

// ===== BASIC MACROS =====
#define GREAT_ANCIENT int main
#define INVOKE using
#define NAME typedef
#define ABYSS std
#define UTTER std::cout
#define HEARKEN std::cin
#define OFFER_SACRIFICE return

#define PERFORM_RITUAL do
#define UNTIL_YOU_GO_MAD while
#define FOR_EACH_SACRIFICE for

#define ELSE_CURSE else

#define CULT class
#define TABLET struct
#define PROPHECY enum

#define BREAK_SEALS break
#define CONTINUE_MADNESS continue

#define TRUTH_NYARLATHOTEP true
#define LIE_CTHULHU false

#define MADNESS std::endl
#define NEW_HORROR new
#define ANNIHILATION delete
#define UNFATHOMABLE nullptr
#define NOTHING NULL
#define FLESH_TABLET std::to_string
#define WIDTH_OF_MADNESS std::setw
#define INCANTATION const
#define POWER_YOG_SOTHOTH std::pow
#define INVOKE_ANCIENT throw
#define MADNESS_FROM_OUTER_SPHERES std::exception
#define READ_NECRONOMICON std::ifstream
#define WRITE_NECRONOMICON std::ofstream
#define GRIMOIRE std::fstream
#define CULT_SERVANT friend
#define JUMP_BETWEEN_DIMENSIONS goto
#define SPELL_FORMULA template
#define NAME_OF_ANCIENT typename
#define FORBIDDEN_KNOWLEDGE private
#define KNOWLEDGE_FOR_INITIATES public
#define SECRET_KNOWLEDGE protected
#define WOVEN_INTO_FLESH inline
#define ETERNAL static
#define THIS_NIGHTMARE this
#define ATTEMPT_TO_COMPREHEND try
#define CAUGHT_MADNESS catch
#define DIMENSION_OF_CHAOS namespace
#define OPEN_GATES open
#define CLOSE_GATES close
#define ENTITY_FROM_OTHER_WORLDS auto
#define TRANSFORMATION_OF_MATTER static_cast
#define GAZE_FROM_ANOTHER_DIMENSION peek
#define TWINS std::pair
#define ELDER_TWIN first
#define YOUNGER_TWIN second
#define RITUAL operator
#define SHIFT_REALITY std::move

#define HORROR std::exception
#define ESSENCE_OF_HORROR what

#define TIME_OUTSIDE_TIME std::time

#define ABSORB_KNOWLEDGE std::getline
#define WORTHY_PRIEST good
#define DESCENT_INTO_MADNESS fail
#define END_OF_ALL_THINGS eof
#define ABYSS_OF_COMPLETION eof
#define STREAM_FROM_ABYSS std::ostream
#define STREAM_INTO_ABYSS std::istream
#define EXCHANGE_ENTITIES std::swap
#define EXTRACT_ENTITY get

// ===== DATA TYPES =====
INVOKE FLESH = int;
INVOKE KNOWLEDGE_OF_ANCIENTS = double;
INVOKE SMALL_PART_OF_KNOWLEDGE = float;
INVOKE SYMBOL_OF_INCANTATION = char;
INVOKE TEXT_OF_NECRONOMICON = std::string;
INVOKE VOID = void;
INVOKE SMALL_HORROR = short;
INVOKE ANCIENT_HORROR = long;
INVOKE HORROR_FROM_THE_DEPTHS = long long;
INVOKE MEASURE_OF_MADNESS = size_t;
INVOKE TRUTH_CTHULHU = bool;

INVOKE UNFATHOMABLE_FLESH = unsigned int;
INVOKE UNFATHOMABLE_SYMBOL = unsigned char;
INVOKE UNFATHOMABLE_SMALL_HORROR = unsigned short;
INVOKE UNFATHOMABLE_ANCIENT_HORROR = unsigned long;
INVOKE UNFATHOMABLE_HORROR_FROM_THE_DEPTHS = unsigned long long;

// ===== USAGE EXAMPLES =====
/*
IF_STARS_ALIGNED {
    UTTER << "Stars are favorable!" << MADNESS;
}
ELSE_CURSE {
    UTTER << "Curse!" << MADNESS;
}

IF_WILL_OF_CHAOS {
    UTTER << "Chaos is favorable!" << MADNESS;
}

RITUAL_OF_CHANCE {
    UTTER << "Ritual succeeded!" << MADNESS;
}

auto number = RANDOM_NUMBER(100);
*/

PROPHECY COUNT_OF_ANCIENTS{
    BEGINNING = 0,
    FIRST_SIGN = 1,
    SECOND_SIGN = 2,
    THIRD_SIGN = 3,
    FOURTH_SIGN = 4,
    FIFTH_SIGN = 5,
    SIXTH_SIGN = 6,
    SEVENTH_SIGN = 7,
    EIGHTH_SIGN = 8,
    NINTH_SIGN = 9,
    CYCLE_COMPLETION = 10
};

#endif