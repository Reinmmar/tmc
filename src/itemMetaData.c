#include "global.h"
#include "itemMetaData.h"
#include "item.h"

const ItemMetaData gItemMetaData[] = {
    [ITEM_NONE] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_SMITH_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x1u, 0x5u, 0x1u, 0x5u },
    [ITEM_GREEN_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x2u, 0x5u, 0x2u, 0x5u },
    [ITEM_RED_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x3u, 0x5u, 0x3u, 0x5u },
    [ITEM_BLUE_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x4u, 0x5u, 0x4u, 0x5u },
    [ITEM_UNUSED_SWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x5u, 0x5u, 0x5u, 0x5u },
    [ITEM_FOURSWORD] = { MENU_SLOT_SWORD, 0u, 0u, 0u, 0x6u, 0x5u, 0x6u, 0x5u },
    [ITEM_BOMBS] = { MENU_SLOT_BOMBS, 0x7u, 0x63u, 0u, 0x1cu, 0x5u, 0x1cu, 0x5u },
    [ITEM_REMOTE_BOMBS] = { MENU_SLOT_BOMBS, 0x7u, 0x63u, 0u, 0x8u, 0x5u, 0x8u, 0x5u },
    [ITEM_BOW] = { MENU_SLOT_BOW, 0xbu, 0x63u, 0u, 0x9u, 0x5u, 0x9u, 0x5u },
    [ITEM_LIGHT_ARROW] = { MENU_SLOT_BOW, 0xbu, 0x63u, 0u, 0xau, 0x5u, 0xau, 0x5u },
    [ITEM_BOOMERANG] = { MENU_SLOT_BOOMERANG, 0x12u, 0u, 0u, 0xbu, 0x5u, 0xbu, 0x5u },
    [ITEM_MAGIC_BOOMERANG] = { MENU_SLOT_BOOMERANG, 0x12u, 0u, 0u, 0xcu, 0x5u, 0xcu, 0x5u },
    [ITEM_SHIELD] = { MENU_SLOT_SHIELD, 0u, 0u, 0u, 0xdu, 0x5u, 0xdu, 0x5u },
    [ITEM_MIRROR_SHIELD] = { MENU_SLOT_SHIELD, 0u, 0u, 0u, 0xeu, 0x5u, 0xeu, 0x5u },
    [ITEM_LANTERN_OFF] = { MENU_SLOT_LANTERN, 0u, 0u, 0u, 0xfu, 0x5u, 0xfu, 0x5u },
    [ITEM_LANTERN_ON] = { MENU_SLOT_LANTERN, 0u, 0u, 0u, 0x10u, 0x5u, 0x10u, 0x5u },
    [ITEM_GUST_JAR] = { MENU_SLOT_GUST_JAR, 0u, 0u, 0u, 0x11u, 0x5u, 0x11u, 0x5u },
    [ITEM_PACCI_CANE] = { MENU_SLOT_CANE, 0u, 0u, 0u, 0x12u, 0x5u, 0x12u, 0x5u },
    [ITEM_MOLE_MITTS] = { MENU_SLOT_MOLE_MITTS, 0u, 0u, 0u, 0x13u, 0x5u, 0x13u, 0x5u },
    [ITEM_ROCS_CAPE] = { MENU_SLOT_ROCS_CAPE, 0u, 0u, 0u, 0x14u, 0x5u, 0x14u, 0x5u },
    [ITEM_PEGASUS_BOOTS] = { MENU_SLOT_PEGASUS_BOOTS, 0u, 0u, 0u, 0x15u, 0x5u, 0x15u, 0x5u },
    [ITEM_FIRE_ROD] = { 0x63u, 0u, 0u, 0u, 0x16u, 0x5u, 0x16u, 0x5u },
    [ITEM_OCARINA] = { MENU_SLOT_OCARINA, 0u, 0u, 0u, 0x17u, 0x5u, 0x17u, 0x5u },
    [ITEM_ORB_GREEN] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_ORB_BLUE] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_ORB_RED] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_TRAP] = { 0x63u, 0u, 0u, 0u, 0u, 0u, 0u, 0u },
    [ITEM_BOTTLE1] = { MENU_SLOT_BOTTLE0, 0x3u, 0u, 0x1u, 0x20u, 0x5u, 0x20u, 0x5u },
    [ITEM_BOTTLE2] = { MENU_SLOT_BOTTLE1, 0x3u, 0u, 0x1u, 0x20u, 0x5u, 0x20u, 0x5u },
    [ITEM_BOTTLE3] = { MENU_SLOT_BOTTLE2, 0x3u, 0u, 0x1u, 0x20u, 0x5u, 0x20u, 0x5u },
    [ITEM_BOTTLE4] = { MENU_SLOT_BOTTLE3, 0x3u, 0u, 0x1u, 0x20u, 0x5u, 0x20u, 0x5u },
    [ITEM_BOTTLE_EMPTY] = { 0u, 0u, 0u, 0x3u, 0x20u, 0x5u, 0x20u, 0x5u },
    [ITEM_BOTTLE_BUTTER] = { 0u, 0x4u, 0u, 0x3u, 0x21u, 0x5u, 0x21u, 0x5u },
    [ITEM_BOTTLE_MILK] = { 0u, 0x4u, 0u, 0x3u, 0x22u, 0x5u, 0x22u, 0x5u },
    [ITEM_BOTTLE_HALF_MILK] = { 0u, 0x4u, 0u, 0x3u, 0x23u, 0x5u, 0x23u, 0x5u },
    [ITEM_BOTTLE_RED_POTION] = { 0u, 0x4u, 0u, 0x3u, 0x24u, 0x5u, 0x24u, 0x5u },
    [ITEM_BOTTLE_BLUE_POTION] = { 0u, 0x4u, 0u, 0x3u, 0x25u, 0x5u, 0x25u, 0x5u },
    [ITEM_BOTTLE_WATER] = { 0u, 0x4u, 0u, 0x3u, 0x26u, 0x5u, 0x26u, 0x5u },
    [ITEM_BOTTLE_MINERAL_WATER] = { 0u, 0x4u, 0u, 0x3u, 0x27u, 0x5u, 0x27u, 0x5u },
    [ITEM_BOTTLE_FAIRY] = { 0u, 0x4u, 0u, 0x3u, 0x28u, 0x5u, 0x28u, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_RED] = { 0u, 0x4u, 0u, 0x3u, 0x29u, 0x5u, 0x29u, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_ORANGE] = { 0u, 0x4u, 0u, 0x3u, 0x2au, 0x5u, 0x2au, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_YELLOW] = { 0u, 0x4u, 0u, 0x3u, 0x2bu, 0x5u, 0x2bu, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_GREEN] = { 0u, 0x4u, 0u, 0x3u, 0x2cu, 0x5u, 0x2cu, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_BLUE] = { 0u, 0x4u, 0u, 0x3u, 0x2du, 0x5u, 0x2du, 0x5u },
    [ITEM_BOTTLE_PICOLYTE_WHITE] = { 0u, 0x4u, 0u, 0x3u, 0x2eu, 0x5u, 0x2eu, 0x5u },
    [BOTTLE_CHARM_NAYRU] = { 0u, 0x4u, 0u, 0x3u, 0x2fu, 0x5u, 0x2fu, 0x5u },
    [BOTTLE_CHARM_FARORE] = { 0u, 0x4u, 0u, 0x3u, 0x30u, 0x5u, 0x30u, 0x5u },
    [BOTTLE_CHARM_DIN] = { 0u, 0x4u, 0u, 0x3u, 0x31u, 0x5u, 0x31u, 0x5u },
    [ITEM_32] = { 0u, 0u, 0u, 0u, 0x32u, 0x5u, 0x32u, 0x5u },
    [ITEM_33] = { 0u, 0u, 0u, 0u, 0x33u, 0x5u, 0x33u, 0x5u },
    [ITEM_QST_SWORD] = { 0x1u, 0u, 0u, 0u, 0x34u, 0x5u, 0x34u, 0x5u },
    [ITEM_QST_BROKEN_SWORD] = { 0x1u, 0u, 0u, 0u, 0x35u, 0x5u, 0x35u, 0x5u },
    [ITEM_QST_DOGFOOD] = { 0x1u, 0u, 0u, 0u, 0x36u, 0x5u, 0x36u, 0x5u },
    [ITEM_QST_LONLON_KEY] = { 0x1u, 0u, 0u, 0x1u, 0x37u, 0x5u, 0x37u, 0x5u },
    [ITEM_QST_MUSHROOM] = { 0x1u, 0u, 0u, 0u, 0x38u, 0x5u, 0x38u, 0x5u },
    [ITEM_QST_BOOK1] = { 0x1u, 0u, 0u, 0u, 0x39u, 0x5u, 0x39u, 0x5u },
    [ITEM_QST_BOOK2] = { 0x1u, 0u, 0u, 0u, 0x3au, 0x5u, 0x3au, 0x5u },
    [ITEM_QST_BOOK3] = { 0x1u, 0u, 0u, 0u, 0x3bu, 0x5u, 0x3bu, 0x5u },
    [ITEM_QST_GRAVEYARD_KEY] = { 0x1u, 0u, 0u, 0u, 0x3du, 0x5u, 0x3du, 0x5u },
    [ITEM_QST_TINGLE_TROPHY] = { 0u, 0u, 0u, 0u, 0x95u, 0x5u, 0x95u, 0x5u },
    [ITEM_QST_CARLOV_MEDAL] = { 0x3u, 0u, 0u, 0u, 0x96u, 0x5u, 0x96u, 0x5u },
    [ITEM_SHELLS] = { 0x3u, 0xeu, 0x1u, 0u, 0x3eu, 0x5u, 0x77u, 0x5u },
    [ITEM_EARTH_ELEMENT] = { 0x9u, 0u, 0u, 0x2u, 0x40u, 0x5u, 0x40u, 0x5u },
    [ITEM_FIRE_ELEMENT] = { 0xau, 0u, 0u, 0x2u, 0x41u, 0x5u, 0x41u, 0x5u },
    [ITEM_WATER_ELEMENT] = { 0xbu, 0u, 0u, 0x2u, 0x42u, 0x5u, 0x42u, 0x5u },
    [ITEM_WIND_ELEMENT] = { 0xcu, 0u, 0u, 0x2u, 0x43u, 0x5u, 0x43u, 0x5u },
    [ITEM_GRIP_RING] = { 0xdu, 0u, 0u, 0u, 0x44u, 0x5u, 0x44u, 0x5u },
    [ITEM_POWER_BRACELETS] = { 0xeu, 0u, 0u, 0u, 0x45u, 0x5u, 0x45u, 0x5u },
    [ITEM_FLIPPERS] = { 0xfu, 0u, 0u, 0u, 0x46u, 0x5u, 0x46u, 0x5u },
    [ITEM_MAP] = { 0x63u, 0u, 0u, 0u, 0x47u, 0x5u, 0x47u, 0x5u },
    [ITEM_SKILL_SPIN_ATTACK] = { 0u, 0u, 0u, 0u, 0x48u, 0x5u, 0x48u, 0x5u },
    [ITEM_SKILL_ROLL_ATTACK] = { 0u, 0u, 0u, 0u, 0x49u, 0x5u, 0x49u, 0x5u },
    [ITEM_SKILL_DASH_ATTACK] = { 0u, 0u, 0u, 0u, 0x4au, 0x5u, 0x4au, 0x5u },
    [ITEM_SKILL_ROCK_BREAKER] = { 0u, 0u, 0u, 0u, 0x4bu, 0x5u, 0x4bu, 0x5u },
    [ITEM_SKILL_SWORD_BEAM] = { 0u, 0u, 0u, 0u, 0x4cu, 0x5u, 0x4cu, 0x5u },
    [ITEM_SKILL_GREAT_SPIN] = { 0u, 0u, 0u, 0u, 0x4du, 0x5u, 0x4du, 0x5u },
    [ITEM_SKILL_DOWN_THRUST] = { 0u, 0u, 0u, 0u, 0x4eu, 0x5u, 0x4eu, 0x5u },
    [ITEM_SKILL_PERIL_BEAM] = { 0u, 0u, 0u, 0u, 0x4fu, 0x5u, 0x4fu, 0x5u },
    [ITEM_DUNGEON_MAP] = { 0u, 0x6u, 0x1u, 0x2u, 0x50u, 0x5u, 0x50u, 0x5u },
    [ITEM_COMPASS] = { 0u, 0x6u, 0x2u, 0x2u, 0x51u, 0x5u, 0x51u, 0x5u },
    [ITEM_BIG_KEY] = { 0u, 0x6u, 0x4u, 0x2u, 0x52u, 0x5u, 0x52u, 0x5u },
    [ITEM_SMALL_KEY] = { 0u, 0x5u, 0u, 0x3u, 0x53u, 0x5u, 0x53u, 0x5u },
    [ITEM_RUPEE1] = { 0u, 0x2u, 0u, 0x1u, 0x54u, 0x5u, 0x54u, 0x5u },
    [ITEM_RUPEE5] = { 0u, 0x2u, 0x1u, 0x1u, 0x55u, 0x5u, 0x55u, 0x5u },
    [ITEM_RUPEE20] = { 0u, 0x2u, 0x2u, 0x1u, 0x56u, 0x5u, 0x56u, 0x5u },
    [ITEM_RUPEE50] = { 0u, 0x2u, 0x3u, 0u, 0x57u, 0x5u, 0x57u, 0x5u },
    [ITEM_RUPEE100] = { 0u, 0x2u, 0x4u, 0u, 0x58u, 0x5u, 0x58u, 0x5u },
    [ITEM_RUPEE200] = { 0u, 0x2u, 0x5u, 0u, 0x59u, 0x5u, 0x59u, 0x5u },
    [ITEM_5A] = { 0u, 0u, 0u, 0u, 0x5au, 0x5u, 0x5au, 0x5u },
    [ITEM_JABBERNUT] = { 0u, 0u, 0u, 0x1u, 0x5bu, 0x5u, 0x5bu, 0x5u },
    [ITEM_KINSTONE] = { 0u, 0xfu, 0u, 0x2u, 0x5cu, 0x5u, 0x5cu, 0x5u },
    [ITEM_BOMBS5] = { 0u, 0x9u, 0x5u, 0x1u, 0x5du, 0x5u, 0x5du, 0x5u },
    [ITEM_ARROWS5] = { 0u, 0xcu, 0x5u, 0x1u, 0x5eu, 0x5u, 0x5eu, 0x5u },
    [ITEM_HEART] = { 0u, 0x1u, 0x8u, 0x1u, 0x5fu, 0x5u, 0x5fu, 0x5u },
    [ITEM_FAIRY] = { 0u, 0x1u, 0x20u, 0x1u, 0x60u, 0x5u, 0x60u, 0x5u },
    [ITEM_SHELLS30] = { 0u, 0xeu, 0x1eu, 0u, 0x3fu, 0x5u, 0x3fu, 0x5u },
    [ITEM_HEART_CONTAINER] = { 0u, 0u, 0x1u, 0x2u, 0x62u, 0x5u, 0x62u, 0x5u },
    [ITEM_HEART_PIECE] = { 0u, 0u, 0x1u, 0x3u, 0x18u, 0x5u, 0x18u, 0x5u },
    [ITEM_WALLET] = { 0u, 0x10u, 0u, 0x2u, 0x64u, 0x5u, 0x64u, 0x5u },
    [ITEM_BOMBBAG] = { 0u, 0x8u, 0x63u, 0x3u, 0x7u, 0x5u, 0x63u, 0x5u },
    [ITEM_LARGE_QUIVER] = { 0u, 0xau, 0x63u, 0x3u, 0x66u, 0x5u, 0x66u, 0x5u },
    [ITEM_KINSTONE_BAG] = { 0u, 0xdu, 0u, 0u, 0x67u, 0x5u, 0x67u, 0x5u },
    [ITEM_BRIOCHE] = { 0u, 0u, 0u, 0x2u, 0x68u, 0x5u, 0x68u, 0x5u },
    [ITEM_CROISSANT] = { 0u, 0u, 0u, 0x2u, 0x69u, 0x5u, 0x69u, 0x5u },
    [ITEM_PIE] = { 0u, 0u, 0u, 0x2u, 0x6au, 0x5u, 0x6au, 0x5u },
    [ITEM_CAKE] = { 0u, 0u, 0u, 0x2u, 0x6bu, 0x5u, 0x6bu, 0x5u },
    [ITEM_BOMBS10] = { 0u, 0x9u, 0xau, 0x2u, 0x6cu, 0x5u, 0x6cu, 0x5u },
    [ITEM_BOMBS30] = { 0u, 0x9u, 0x1eu, 0x2u, 0x6du, 0x5u, 0x6du, 0x5u },
    [ITEM_ARROWS10] = { 0u, 0xcu, 0xau, 0x2u, 0x6eu, 0x5u, 0x6eu, 0x5u },
    [ITEM_ARROWS30] = { 0u, 0xcu, 0x1eu, 0x2u, 0x6fu, 0x5u, 0x6fu, 0x5u },
    [ITEM_ARROW_BUTTERFLY] = { 0x63u, 0u, 0u, 0x3u, 0x70u, 0x5u, 0x70u, 0x5u },
    [ITEM_DIG_BUTTERFLY] = { 0x63u, 0u, 0u, 0x3u, 0x71u, 0x5u, 0x71u, 0x5u },
    [ITEM_SWIM_BUTTERFLY] = { 0x63u, 0u, 0u, 0x3u, 0x72u, 0x5u, 0x72u, 0x5u },
    [ITEM_SKILL_FAST_SPIN] = { 0x63u, 0u, 0u, 0x2u, 0x73u, 0x5u, 0x73u, 0x5u },
    [ITEM_SKILL_FAST_SPLIT] = { 0x63u, 0u, 0u, 0x2u, 0x74u, 0x5u, 0x74u, 0x5u },
    [ITEM_SKILL_LONG_SPIN] = { 0x63u, 0u, 0u, 0x2u, 0x75u, 0x5u, 0x75u, 0x5u },
};
