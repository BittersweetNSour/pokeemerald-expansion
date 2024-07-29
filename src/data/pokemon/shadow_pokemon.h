#include "global.h"
#include "pokemon.h"
#include "moves.h"

//gShadowPokemonInfo is used as a reference point for Shadow-specific info.
//gShadowTrainerMon (at bottom of file) defines how the mon is constructed on the opposing trainer's party.

const struct ShadowMonInfo gShadowPokemonInfo[] =
{
    [SHADOW_LIST_NONE] = {0},

    [SHADOW_LIST_EEVEE] =
    {
        .isXD = FALSE,
        .boostLevel = 1,
        .shadowAggro = SHADOW_AGGRO_TEST,
        .heartMax = 4000,
        .purifyMoves = {MOVE_LAST_RESORT, MOVE_REVELATION_DANCE, MOVE_CALM_MIND, MOVE_STORED_POWER}
    },

    [SHADOW_LIST_VAPOREON] =
    {
        .isXD = FALSE,
        .boostLevel = 1,
        .shadowAggro = SHADOW_AGGRO_VERY_LOW,
        .heartMax = 6000,
        .purifyMoves = {MOVE_LAST_RESORT, MOVE_REVELATION_DANCE, MOVE_CALM_MIND, MOVE_STORED_POWER}
    },

    [SHADOW_LIST_JOLTEON] =
    {
        .isXD = FALSE,
        .boostLevel = 2,
        .shadowAggro = SHADOW_AGGRO_LOW,
        .heartMax = 6000,
        .purifyMoves = {MOVE_LAST_RESORT, MOVE_REVELATION_DANCE, MOVE_CALM_MIND, MOVE_STORED_POWER}
    },

    [SHADOW_LIST_FLAREON] =
    {
        .isXD = FALSE,
        .boostLevel = 2,
        .shadowAggro = SHADOW_AGGRO_MEDIUM,
        .heartMax = 6000,
        .purifyMoves = {MOVE_LAST_RESORT, MOVE_REVELATION_DANCE, MOVE_BULK_UP, MOVE_POWER_TRIP}
    },

    [SHADOW_LIST_LEAFEON] =
    {
        .isXD = FALSE,
        .boostLevel = 3,
        .shadowAggro = SHADOW_AGGRO_HIGH,
        .heartMax = 6000,
        .purifyMoves = {MOVE_LAST_RESORT, MOVE_REVELATION_DANCE, MOVE_BULK_UP, MOVE_POWER_TRIP}
    },

    [SHADOW_LIST_GLACEON] =
    {
        .isXD = FALSE,
        .boostLevel = 3,
        .shadowAggro = SHADOW_AGGRO_VERY_HIGH,
        .heartMax = 6000,
        .purifyMoves = {MOVE_LAST_RESORT, MOVE_REVELATION_DANCE, MOVE_CALM_MIND, MOVE_STORED_POWER}
    },

    [SHADOW_LIST_LUGIA] =
    {
        .isXD = TRUE,
        .boostLevel = 3,
        .shadowAggro = SHADOW_AGGRO_NONE,
        .heartMax = 12000,
        .purifyMoves = {MOVE_PSYCHO_BOOST, MOVE_FEATHER_DANCE, MOVE_EARTHQUAKE, MOVE_HYDRO_PUMP}
    },

    //Generic Shadow Pokemon
    [SHADOW_LIST_GENERIC_1] = // 251
    {
        .boostLevel = 1,
        .shadowAggro = SHADOW_AGGRO_VERY_LOW,
        .heartMax = 4000,
        .purifyMoves = {MOVE_RETURN, MOVE_REFRESH}
    },

    [SHADOW_LIST_GENERIC_2] = //252
    {
        .boostLevel = 1,
        .shadowAggro = SHADOW_AGGRO_LOW,
        .heartMax = 6000,
        .purifyMoves = {MOVE_RETURN, MOVE_REFRESH}
    },

    [SHADOW_LIST_GENERIC_3] = //253
    {
        .boostLevel = 2,
        .shadowAggro = SHADOW_AGGRO_MEDIUM,
        .heartMax = 8000,
        .purifyMoves = {MOVE_RETURN, MOVE_REFRESH}
    },

    [SHADOW_LIST_GENERIC_4] = //254
    {
        .boostLevel = 2,
        .shadowAggro = SHADOW_AGGRO_HIGH,
        .heartMax = 10000,
        .purifyMoves = {MOVE_RETURN, MOVE_REFRESH}
    },

    [SHADOW_LIST_GENERIC_5] = //255
    {
        .boostLevel = 3,
        .shadowAggro = SHADOW_AGGRO_VERY_HIGH,
        .heartMax = 12000,
        .purifyMoves = {MOVE_RETURN, MOVE_REFRESH}
    }
};

#include "data.h"

const struct TrainerMon gShadowTrainerMon[] =
{
    [SHADOW_LIST_NONE] = {0},

    [SHADOW_LIST_EEVEE] =
    {
        .species = SPECIES_EEVEE,
        .lvl = 15,
        .moves = {MOVE_SHADOW_WAVE, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    },

    [SHADOW_LIST_VAPOREON] =
    {   
        .species = SPECIES_VAPOREON,
        .lvl = 20,
        .iv = 100,
        .isShiny = TRUE,
        .moves = {MOVE_SHADOW_SKY, MOVE_SHADOW_STORM, MOVE_SHADOW_MIST, MOVE_SHADOW_DOWN}
    },

    [SHADOW_LIST_JOLTEON] =
    {
        .species = SPECIES_JOLTEON,
        .lvl = 20,
        .moves = {MOVE_SHADOW_BOLT, MOVE_SHADOW_RAVE, MOVE_SHADOW_PANIC, MOVE_SHADOW_RUSH}
    },

    [SHADOW_LIST_FLAREON] =
    {
        .species = SPECIES_FLAREON,
        .lvl = 20,
        .nature = NATURE_BOLD,
        .isShiny = TRUE,
        .moves = {MOVE_SHADOW_FIRE, MOVE_SHADOW_HALF, MOVE_SHADOW_BLITZ, MOVE_SHADOW_END}
    },

    [SHADOW_LIST_LEAFEON] =
    {
        .species = SPECIES_LEAFEON,
        .lvl = 30,
        .gender = TRAINER_MON_MALE,
        .moves = {MOVE_SHADOW_BLAST, MOVE_SHADOW_HOLD, MOVE_NONE, MOVE_NONE},
    },

    [SHADOW_LIST_GLACEON] =
    {
        .species = SPECIES_GLACEON,
        .lvl = 30,
        .isShiny = TRUE,
        .moves = {MOVE_SHADOW_CHILL, MOVE_SHADOW_BREAK, MOVE_SHADOW_SHED, MOVE_NONE}
    },

    [SHADOW_LIST_LUGIA] =
    {
        .species = SPECIES_LUGIA,
        .lvl = 50,
        .isShiny = TRUE,
        .moves = {MOVE_SHADOW_BLAST, MOVE_SHADOW_DOWN, MOVE_SHADOW_SHED, MOVE_SHADOW_STORM},
    },

    [SHADOW_LIST_GENERIC_1] = //251
    {
        .moves = {MOVE_SHADOW_BLITZ, MOVE_SHADOW_MIST}
    },
    
    [SHADOW_LIST_GENERIC_2] = //252
    {
        .moves = {MOVE_SHADOW_WAVE, MOVE_SHADOW_HOLD}
    },

    [SHADOW_LIST_GENERIC_3] = //253
    {
        .moves = {MOVE_SHADOW_BLITZ, MOVE_SHADOW_MIST}
    },
    
    [SHADOW_LIST_GENERIC_4] = //254
    {
        .moves = {MOVE_SHADOW_WAVE, MOVE_SHADOW_HOLD}
    },

    [SHADOW_LIST_GENERIC_5] = //255
    {
        .moves = {MOVE_SHADOW_BLITZ, MOVE_SHADOW_MIST}
    }
};