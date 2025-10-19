#ifndef GUARD_PAUSE_AREA_MAP_H
#define GUARD_PAUSE_AREA_MAP_H

#include "data.h"
#include "global.h"

/*
 * Enumerates areas on the area map for most areaId variables except `struct Unk_08D6CD0C::unk46`.
 * It is used as index into arrays and must thus remain contiguous.
 * It is expected that all regions that are displayable on the area map have a value between AREA_RAINBOW_ROUTE and AREA_CANDY_CONSTELLATION.
 */
enum AreaId {
    AREA_TUTORIAL,
    AREA_RAINBOW_ROUTE,
    AREA_MOONLIGHT_MANSION,
    AREA_CABBAGE_CAVERN,
    AREA_MUSTARD_MOUNTAIN,
    AREA_CARROT_CASTLE,
    AREA_OLIVE_OCEAN,
    AREA_PEPPERMINT_PALACE,
    AREA_RADISH_RUINS,
    AREA_CANDY_CONSTELLATION,
    AREA_DIMENSION_MIRROR,
    NUM_AREA_IDS,
};

enum KirbyRoomFlagIndices {
    KIRBY_OUTSIDE_AREAMAP,
    KIRBY_IN_NORMAL_ROOM,
    KIRBY_IN_TUTORIAL_ROOM,
    KIRBY_IN_DIMENSION_MIRROR,
};

void WorldMapPauseEnableUI(void);
void CreateAreaMap(void);
enum KirbyRoomFlagIndices GetKirbyRoomFlagIndex(u32);

#endif
