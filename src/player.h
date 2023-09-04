#pragma once
#include "types.h"

extern const uint8 kSwimmingTab1[4];
extern const uint8 kSwimmingTab2[2];

enum {
  kPlayerState_Ground = 0,
  kPlayerState_FallingIntoHole = 1,
  kPlayerState_RecoilWall = 2,
  kPlayerState_SpinAttacking = 3,
  kPlayerState_Swimming = 4,
  kPlayerState_TurtleRock = 5,
  kPlayerState_RecoilOther = 6,
  kPlayerState_Electrocution = 7,
  kPlayerState_Ether = 8,
  kPlayerState_Bombos = 9,
  kPlayerState_Quake = 10,
  kPlayerState_FallOfLeftRightLedge = 12,
  kPlayerState_JumpOffLedgeDiag = 14,
  kPlayerState_StartDash = 17,
  kPlayerState_StopDash = 18,
  kPlayerState_Hookshot = 19,
  kPlayerState_Mirror = 20,
  kPlayerState_HoldUpItem = 21,
  kPlayerState_AsleepInBed = 22,
  kPlayerState_PermaBunny = 23,
  kPlayerState_ReceivingEther = 25,
  kPlayerState_ReceivingBombos = 26,
  kPlayerState_OpeningDesertPalace = 27,
  kPlayerState_TempBunny = 28,
  kPlayerState_PullForRupees = 29,
  kPlayerState_SpinAttackMotion = 30,
};






void Dungeon_HandleLayerChange(void);
void CacheCameraProperties(void);
void CheckAbilityToSwim(void);
void Link_Main(void);
void Link_ControlHandler(void);
void LinkState_Default(void);
void HandleLink_From1D(void);
void PlayerHandler_00_Ground_3(void);
bool Link_HandleBunnyTransformation(void);
void LinkState_TemporaryBunny(void);
void PlayerHandler_17_Bunny(void);
void LinkState_Bunny_recache(void);
void Link_TempBunny_Func2(void);
void LinkState_HoldingBigRock(void);
void EtherTablet_StartCutscene(void);
void LinkState_ReceivingEther(void);
void BombosTablet_StartCutscene(void);
void LinkState_ReceivingBombos(void);
void LinkState_ReadingDesertTablet(void);
void HandleSomariaAndGraves(void);
void LinkState_Recoil(void);
void Link_HandleRecoilAndTimer(bool jump_into_middle);
void LinkState_OnIce(void);
void Link_HandleChangeInZVelocity(void);
void Player_ChangeZ(uint8 zd);
void LinkHop_HoppingSouthOW(void);
void LinkState_HandlingJump(void);
void LinkHop_FindTileToLandOnSouth(void);
void LinkState_HoppingHorizontallyOW(void);
void Link_HoppingHorizontally_FindTile_Y(void);
void Link_SetToDeepWater(void);
void LinkState_0F(void);
uint8 Link_HoppingHorizontally_FindTile_X(uint8 o);
void LinkState_HoppingDiagonallyUpOW(void);
void LinkState_HoppingDiagonallyDownOW(void);
void LinkHop_FindLandingSpotDiagonallyDown(void);
void Link_SplashUponLanding(void);
void LinkState_Dashing(void);
void LinkState_ExitingDash(void);
void Link_CancelDash(void);
void RepelDash(void);
void LinkApplyTileRebound(void);
void Sprite_RepelDash(void);
void Flag67WithDirections(void);
void LinkState_Pits(void);
void HandleLayerOfDestination(void);
void DungeonPitDoDamage(void);
void HandleDungeonLandingFromPit(void);
void PlayerHandler_04_Swimming(void);
void Link_HandleSwimMovements(void);
void Link_FlagMaxAccels(void);
void Link_SetIceMaxAccel(void);
void Link_SetMomentum(void);
void Link_ResetSwimmingState(void);
void Link_ResetStateAfterDamagingPit(void);
void ResetAllAcceleration(void);
void Link_HandleSwimAccels(void);
void Link_SetTheMaxAccel(void);
void LinkState_Zapped(void);
void PlayerHandler_15_HoldItem(void);
void Link_ReceiveItem(uint8 item, int chest_position);
void Link_TuckIntoBed(void);
void LinkState_Sleeping(void);
void Link_HandleSwordCooldown(void);
void Link_HandleYItem(void);
void Link_HandleAPress(void);
void Link_APress_PerformBasic(uint8 action_x2);
void HandleSwordSfxAndBeam(void);
void Link_CheckForSwordSwing(void);
void HandleSwordControls(void);
void Link_ResetSwordAndItemUsage(void);
void Player_Sword_SpinAttackJerks_HoldDown(void);
void LinkItem_Rod(void);
void LinkItem_Hammer(void);
void LinkItem_Bow(void);
void LinkItem_Boomerang(void);
void Link_ResetBoomerangYStuff(void);
void LinkItem_Bombs(void);
void LinkItem_Bottle(void);
void LinkItem_Lamp(void);
void LinkItem_Powder(void);
void LinkItem_ShovelAndFlute(void);
void LinkItem_Shovel(void);
void LinkItem_Flute(void);
void LinkItem_Book(void);
void LinkItem_Ether(void);
void LinkState_UsingEther(void);
void LinkItem_Bombos(void);
void LinkState_UsingBombos(void);
void LinkItem_Quake(void);
void LinkState_UsingQuake(void);
void Link_ActivateSpinAttack(void);
void Link_AnimateVictorySpin(void);
void LinkState_SpinAttack(void);
void LinkItem_Mirror(void);
void DoSwordInteractionWithTiles_Mirror(void);
void LinkState_CrossingWorlds(void);
void Link_PerformDesertPrayer(void);
void HandleFollowersAfterMirroring(void);
void LinkItem_Hookshot(void);
void LinkState_Hookshotting(void);
void LinkItem_Cape(void);
void Link_ForceUnequipCape(void);
void Link_ForceUnequipCape_quietly(void);
void HaltLinkWhenUsingItems(void);
void Link_HandleCape_passive_LiftCheck(void);
void Player_CheckHandleCapeStuff(void);
void LinkItem_CaneOfSomaria(void);
void LinkItem_CaneOfByrna(void);
bool SearchForByrnaSpark(void);
void LinkItem_Net(void);
bool CheckYButtonPress(void);
bool LinkCheckMagicCost(uint8 x);
void Refund_Magic(uint8 x);
void Link_ItemReset_FromOverworldThings(void);
void Link_PerformThrow(void);
void Link_APress_LiftCarryThrow(void);
void Link_PerformDash(void);
void Link_PerformGrab(void);
void Link_APress_PullObject(void);
void Link_PerformStatueDrag(void);
void Link_APress_StatueDrag(void);
void Link_PerformRupeePull(void);
void LinkState_TreePull(void);
void Link_PerformRead(void);
void Link_PerformOpenChest(void);
bool Link_CheckNewAPress(void);
bool Link_HandleToss(void);
void Link_HandleDiagonalCollision(void);
void Player_LimitDirections_Inner(void);
void Link_HandleCardinalCollision(void);
void RunSlopeCollisionChecks_VerticalFirst(void);
void RunSlopeCollisionChecks_HorizontalFirst(void);
bool CheckIfRoomNeedsDoubleLayerCheck(void);
void CreateVelocityFromMovingBackground(void);
void StartMovementCollisionChecks_Y(void);
void StartMovementCollisionChecks_Y_HandleIndoors(void);
void HandlePushingBonkingSnaps_Y(void);
void StartMovementCollisionChecks_Y_HandleOutdoors(void);
bool RunLedgeHopTimer(void); // carry
void Link_BonkAndSmash(void);
void Link_AddInVelocityYFalling(void);
void CalculateSnapScratch_Y(void);
void ChangeAxisOfPerpendicularDoorMovement_Y(void);
void Link_AddInVelocityY(void);
void Link_HopInOrOutOfWater_Y(void);
void Link_FindValidLandingTile_North(void);
void Link_FindValidLandingTile_DiagonalNorth(void);
void StartMovementCollisionChecks_X(void);
void StartMovementCollisionChecks_X_HandleIndoors(void);
void HandlePushingBonkingSnaps_X(void);
void StartMovementCollisionChecks_X_HandleOutdoors(void);
void SnapOnX(void);
void CalculateSnapScratch_X(void);
int8 ChangeAxisOfPerpendicularDoorMovement_X(void);
void Link_HopInOrOutOfWater_X(void);
void Link_HandleDiagonalKickback(void);
void TileDetect_MainHandler(uint8 item);
bool Link_PermissionForSloshSounds(void);
bool PushBlock_AttemptToPushTheBlock(uint8 what, uint16 x, uint16 y);
uint8 Link_HandleLiftables(void);
void HandleNudging(int8 arg_r0);
void TileBehavior_HandleItemAndExecute(uint16 x, uint16 y);
uint8 PushBlock_GetTargetTileFlag(uint16 x, uint16 y);
void FlagMovingIntoSlopes_Y(void);
void FlagMovingIntoSlopes_X(void);
void Link_HandleRecoiling(void);
void Player_HandleIncapacitated_Inner2(void);
void Link_HandleVelocity(void);
void Link_MovePosition(void);
void Link_HandleVelocityAndSandDrag(uint16 x, uint16 y);
void HandleSwimStrokeAndSubpixels(void);
void Player_SomethingWithVelocity_TiredOrSwim(uint16 xvel, uint16 yvel);
void Link_HandleMovingFloor(void);
void Link_ApplyMovingFloorVelocity(void);
void Link_ApplyConveyor(void);
void Link_HandleMovingAnimation_FullLongEntry(void);
void Link_HandleMovingAnimation_StartWithDash(void);
void Link_HandleMovingAnimationSwimming(void);
void Link_HandleMovingAnimation_Dash(void);
void HandleIndoorCameraAndDoors(void);
void HandleDoorTransitions(void);
void ApplyLinksMovementToCamera(void);
uint8 FindFreeMovingBlockSlot(uint8 x);
bool InitializePushBlock(uint8 r14, uint8 idx);
void Sprite_Dungeon_DrawSinglePushBlock(int j);
void Link_Initialize(void);
void Link_ResetProperties_A(void);
void Link_ResetProperties_B(void);
void Link_ResetProperties_C(void);
bool Link_CheckForEdgeScreenTransition(void);
void CacheCameraPropertiesIfOutdoors(void);
void SomariaBlock_HandlePlayerInteraction(int k);
void Gravestone_Move(int k);
void Gravestone_ActAsBarrier(int k);
void AncillaAdd_DugUpFlute(uint8 a, uint8 y);
void AncillaAdd_CaneOfByrnaInitSpark(uint8 a, uint8 y);
void AncillaAdd_ShovelDirt(uint8 a, uint8 y);
void AncillaAdd_Hookshot(uint8 a, uint8 y);
void ResetSomeThingsAfterDeath(uint8 a);
void SpawnHammerWaterSplash(void);
void DiggingGameGuy_AttemptPrizeSpawn(void);
