#pragma once
#include "types.h"

void NMI_UploadSubscreenOverlayFormer(void);
void NMI_UploadSubscreenOverlayLatter(void);
void Interrupt_NMI(uint16 joypad_input);
void NMI_ReadJoypads(uint16 joypad_input);
void NMI_DoUpdates(void);
void NMI_UploadTilemap(void);
void NMI_UploadTilemap_doNothing(void);
void NMI_UploadBG3Text(void);
void NMI_UpdateOWScroll(void);
void NMI_UpdateSubscreenOverlay(void);
void NMI_HandleArbitraryTileMap(const uint8 *src, int i, int i_end);
void NMI_UpdateBG1Wall(void);
void NMI_TileMapNothing(void);
void NMI_UpdateLoadLightWorldMap(void);
void NMI_UpdateBG2Left(void);
void NMI_UpdateBGChar3and4(void);
void NMI_UpdateBGChar5and6(void);
void NMI_UpdateBGCharHalf(void);
void NMI_UpdateBGChar0(void);
void NMI_UpdateBGChar1(void);
void NMI_UpdateBGChar2(void);
void NMI_UpdateBGChar3(void);
void NMI_UpdateObjChar0(void);
void NMI_UpdateObjChar2(void);
void NMI_UpdateObjChar3(void);
void NMI_RunTileMapUpdateDMA(int dst);
void NMI_UploadDarkWorldMap(void);
void NMI_UploadGameOverText(void);
void NMI_UpdatePegTiles(void);
void NMI_UpdateStarTiles(void);
void HandleStripes14(const uint8 *p);
void NMI_UpdateIRQGFX(void);
