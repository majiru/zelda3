#include "types.h"
#include "variables.h"
#include "zelda_rtl.h"

#pragma once









static inline OamEnt *GetOamCurPtr(void) {
  return (OamEnt *)&g_ram[oam_cur_ptr];
}

static inline int FindInByteArray(const uint8 *data, uint8 lookfor, size_t size) {
  for (size_t i = size; i--;)
    if (data[i] == lookfor)
      return (int)i;
  return -1;
}

static inline int FindInWordArray(const uint16 *data, uint16 lookfor, size_t size) {
  for (size_t i = size; i--;)
    if (data[i] == lookfor)
      return (int)i;
  return -1;
}


extern const uint16 kMemoryLocationToGiveItemTo[76];

const uint16 *SrcPtr(uint16 src);
uint8 Ancilla_Sfx2_Near(uint8 a);
void Ancilla_Sfx3_Near(uint8 a);
void LoadDungeonRoomRebuildHUD(void);
void Module_Unknown0(void);
void Module_Unknown1(void);
void Module_MainRouting(void);
void NMI_PrepareSprites(void);
void Sound_LoadIntroSongBank(void);
void LoadOverworldSongs(void);
void LoadDungeonSongs(void);
void LoadCreditsSongs(void);
void Dungeon_LightTorch(void);
void RoomDraw_AdjustTorchLightingChange(uint16 x, uint16 y, uint16 r8);
int Dungeon_PrepOverlayDma_nextPrep(int dst, uint16 r8);
int Dungeon_PrepOverlayDma_watergate(int dst, uint16 r8, uint16 r6, int loops);
void Module05_LoadFile(void);
void Module13_BossVictory_Pendant(void);
void BossVictory_Heal(void);
void Dungeon_StartVictorySpin(void);
void Dungeon_RunVictorySpin(void);
void Dungeon_CloseVictorySpin(void);
void Module15_MirrorWarpFromAga(void);
void Module16_BossVictory_Crystal(void);
void Module16_04_FadeAndEnd(void);
void TriforceRoom_LinkApproachTriforce(void);
void AncillaAdd_ItemReceipt(uint8 ain, uint8 yin, int chest_pos);
void ItemReceipt_GiveBottledItem(uint8 item);
void Module17_SaveAndQuit(void);
void WallMaster_SendPlayerToLastEntrance(void);
uint8 GetRandomNumber(void);
uint8 Link_CalculateSfxPan(void);
void SpriteSfx_QueueSfx1WithPan(int k, uint8 a);
void SpriteSfx_QueueSfx2WithPan(int k, uint8 a);
void SpriteSfx_QueueSfx3WithPan(int k, uint8 a);
uint8 Sprite_CalculateSfxPan(int k);
uint8 CalculateSfxPan(uint16 x);
uint8 CalculateSfxPan_Arbitrary(uint8 a);
void Init_LoadDefaultTileAttr(void);
void Main_ShowTextMessage(void);
uint8 HandleItemTileAction_Overworld(uint16 x, uint16 y);
