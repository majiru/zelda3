#pragma once
#include "types.h"

enum kHudItems {

  kHudItem_Bombs = 4,
  kHudItem_Mushroom = 5,
  kHudItem_Hammer = 12,
  kHudItem_Flute = 13,
  kHudItem_BookMudora = 15,
  kHudItem_BottleOld = 16,
  
  kHudItem_Shovel = 16,
  kHudItem_Bottle1 = 21,
  kHudItem_Bottle2 = 22,
  kHudItem_Bottle3 = 23,
  kHudItem_Bottle4 = 24,
};

void Hud_RefreshIcon(void);
uint8 CheckPalaceItemPosession(void);
void Hud_FloorIndicator(void);
void Hud_RemoveSuperBombIndicator(void);
void Hud_SuperBombIndicator(void);
void Hud_RefillLogic(void);
void Hud_Module_Run(void);
void Hud_ClearTileMap(void);
void Hud_Init(void);
void Hud_BringMenuDown(void);
void Hud_ChooseNextMode(void);
void Hud_NormalMenu(void);
void Hud_UpdateHud(void);
uint8 Hud_LookupInventoryItem(uint8 item);
void Hud_UpdateEquippedItem(void);
void Hud_CloseMenu(void);
void Hud_GotoBottleMenu(void);
void Hud_InitBottleMenu(void);
void Hud_ExpandBottleMenu(void);
void Hud_BottleMenu(void);
void Hud_DrawBottleMenu_Update(void);
void Hud_EraseBottleMenu(void);
void Hud_RestoreNormalMenu(void);
void Hud_SearchForEquippedItem(void);
void Hud_DrawYButtonItems(void);
void Hud_DrawAbilityBox(void);
void Hud_DrawProgressIcons(void);
void Hud_DrawProgressIcons_Pendants(void);
void Hud_DrawProgressIcons_Crystals(void);
void Hud_DrawSelectedYButtonItem(void);
void Hud_DrawEquipmentBox(void);
void Hud_DrawBottleMenu(void);
bool Hud_RefillHealth(void);
void Hud_AnimateHeartRefill(void);
bool Hud_RefillMagicPower(void);
void Hud_RestoreTorchBackground(void);
void Hud_RebuildIndoor(void);
void Hud_Rebuild(void);
const uint16 *Hud_GetItemBoxPtr(int item);
int GetCurrentItemButtonIndex(void);
uint8 *GetCurrentItemButtonPtr(int i);

void Hud_HandleItemSwitchInputs(void);
