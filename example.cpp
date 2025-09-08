#include "header/Azathoth_plus_plus.h"

GREAT_ANCIENT() {
    AWAKEN_THE_ANCIENTS;
    
    // Completely random if (50/50)
    IF_STARS_ALIGNED {
        UTTER << "★ Stars aligned!" << MADNESS;
    }
    ELSE_CURSE {
        UTTER << "☠ Curse has befallen us!" << MADNESS;
    }
    
    // Ritual with 70% chance
    RITUAL_OF_CHANCE {
        UTTER << "🔥 Ritual succeeded!" << MADNESS;
    }
    
    // Will of chaos (30% chance)
    IF_WILL_OF_CHAOS {
        UTTER << "🌀 Will of chaos manifested!" << MADNESS;
    }
    
    // Random number
    auto luck = RANDOM_NUMBER(100);
    UTTER << "Luck: " << luck << MADNESS;
    
    OFFER_SACRIFICE 0;
}