#pragma once
#include "types.h"

typedef struct TagalongMessageInfo {
  uint16 y, x, bit, msg, tagalong;
} TagalongMessageInfo;

bool Tagalong_IsFollowing(void);
bool Follower_ValidateMessageFreedom(void);
void Follower_MoveTowardsLink(void);
bool Follower_CheckBlindTrigger(void);
void Follower_Initialize(void);
void Sprite_BecomeFollower(int k);
void Follower_Main(void);
void Follower_NoTimedMessage(void);
void Follower_CheckGameMode(void);
void Follower_BasicMover(void);
void Follower_NotFollowing(void);
void Follower_OldMan(void);
void Follower_OldManUnused(void);
void Follower_DoLayers(void);
bool Follower_CheckProximityToLink(void);
void Follower_HandleTrigger(void);
void Tagalong_Draw(void);
void Follower_AnimateMovement_preserved(uint8 ain, uint16 xin, uint16 yin);
bool Follower_CheckForTrigger(const TagalongMessageInfo *info);
void Follower_Disable(void);
void Blind_SpawnFromMaiden(uint16 x, uint16 y);
void Kiki_RevertToSprite(int k);
int Kiki_SpawnHandlerMonke(int k);
void Kiki_SpawnHandler_A(int k);
void Kiki_SpawnHandler_B(int k);
