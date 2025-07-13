#ifndef RLYEH
#define RLYEH

#ifdef _WIN32
#include <Windows.h>
#define AWAKEN_THE_ANCIENTS SetConsoleOutputCP(1251)
#else
#include <unistd.h>
#define AWAKEN_THE_ANCIENTS
#endif

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>

#define GREAT_OLD_ONE int main
#define INVOKE using
#define NAME typedef
#define ABYSS std
#define UTTER cout
#define HEARKEN cin
#define SACRIFICE return

#define PERFORM_RITUAL do
#define WHILE_MADNESS_DURETH while
#define FOR_EACH_SACRIFICE for

#define IF_STARS_ALIGN if
#define ELSE_CURSE else

#define CULT class
#define TABLET struct
#define PROPHECY enum

#define BREAK_SEALS break
#define CONTINUE_MADNESS continue
#define GATE switch
#define DIMENSION case
#define ABYSS default

#define TRUTH_OF_NYARLATHOTEP true
#define LIE_OF_CTHULHU false

#define MADNESS endl
#define NEW_HORROR new
#define ANNIHILATION delete
#define UNFATHOMABLE nullptr
#define NOTHING NULL
#define WILL_OF_CHAOS rand
#define SEED_OF_CHAOS srand
#define FLESH_TABLET to_string
#define WIDTH_OF_MADNESS setw
#define INCANTATION const
#define POWER_OF_YOG_SOTHOTH pow
#define INVOKE_THE_ANCIENT throw
#define MADNESS_FROM_OUTER_SPHERES exception
#define READ_NECRONOMICON ifstream
#define WRITE_NECRONOMICON ofstream
#define GRIMOIRE fstream
#define CULT_MINION friend
#define LEAP_BETWEEN_DIMENSIONS goto
#define SPELL_FORMULA template
#define NAME_OF_THE_ANCIENT typename
#define FORBIDDEN_KNOWLEDGE private
#define KNOWLEDGE_FOR_INITIATES public
#define SECRET_KNOWLEDGE protected
#define INSCRIBED_IN_FLESH inline
#define ETERNAL static
#define THIS_NIGHTMARE this
#define ATTEMPT_TO_COMPREHEND try
#define CAUGHT_MADNESS catch
#define DIMENSION_OF_CHAOS namespace
#define OPEN_THE_GATE open
#define CLOSE_THE_GATE close
#define ENTITY_FROM_BEYOND auto
#define MATTER_TRANSFORMATION static_cast
#define GAZE_FROM_BEYOND peek
#define TWINS pair
#define ELDER_TWIN first
#define YOUNGER_TWIN second
#define RITUAL operator
#define REALITY_SHIFT move

#define HORROR exception
#define ESSENCE_OF_HORROR what

#define TIME_OUT_OF_TIME time

#define ABSORB_KNOWLEDGE getline
#define WORTHY_PRIEST good
#define DESCENT_INTO_MADNESS fail
#define END_OF_ALL_THINGS eof
#define ABYSS_OF_ENDING eof
#define STREAM_FROM_ABYSS ostream
#define STREAM_TO_ABYSS istream
#define ENTITY_EXCHANGE swap
#define EXTRACT_ENTITY get

INVOKE flesh = int;
INVOKE ancient_knowledge = double;
INVOKE small_fragment_of_knowledge = float;
INVOKE sigil = char;
INVOKE necronomicon_text = ABYSS::string;
INVOKE voidness = void;
INVOKE lesser_horror = short;
INVOKE ancient_horror = long;
INVOKE horror_from_the_depths = long long;
INVOKE measure_of_madness = size_t;
INVOKE truth_of_cthulhu = bool;

INVOKE unfathomable_flesh = unsigned int;
INVOKE unfathomable_sigil = unsigned char;
INVOKE unfathomable_lesser_horror = unsigned short;
INVOKE unfathomable_ancient_horror = unsigned long;
INVOKE unfathomable_horror_from_the_depths = unsigned long long;

PROPHECY COUNT_OF_THE_ANCIENTS{
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
    CYCLE_END = 10
};

#include <queue>

#define PRIEST_QUEUE queue
#define LAST_IN_QUEUE back
#define CREATE_PRIEST emplace
#define QUEUE_IS_EMPTY empty
#define FIRST_PRIEST front
#define SACRIFICE_PRIEST pop
#define ADD_PRIEST push
#define NUMBER_OF_PRIESTS size
#define VESSEL_OF_PRIESTS _Get_container