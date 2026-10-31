/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008d430 */

undefined4 __thiscall FUN_1008d430(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 local_aec;
  undefined4 uStack_ae8;
  undefined4 local_ae4;
  undefined1 local_a8 [36];
  undefined1 local_84 [36];
  undefined4 local_60;
  undefined4 local_5c;
  char *local_58;
  char *local_54;
  uint local_50 [6];
  char *local_38;
  undefined4 uStack_34;
  char *local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_aec;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3770;
  local_1c = ExceptionList;
  local_28 = param_2 + 0x10;
  ExceptionList = &local_1c;
  cVar2 = FUN_10077c4c();
  *(char *)(param_1 + 0x48) = cVar2;
  local_24 = param_1;
  if ((cVar2 == -0x34) || (cVar2 == -0x6d)) {
    DAT_1039cbb8 = 1;
    *(undefined1 *)(param_1 + 0x4a) = 1;
    local_aec = CONCAT31(local_aec._1_3_,1);
    FUN_10077182(&local_aec);
  }
  uVar4 = FUN_10077b66();
  local_aec = 0;
  uStack_ae8 = 0;
  local_ae4 = 0;
  FUN_10096406(uVar4);
  iVar1 = local_24;
  local_14 = 0;
  if ((undefined4 *)(local_24 + 0x3c) != &local_aec) {
    FUN_1008d8fe();
    *(ulonglong *)(iVar1 + 0x3c) = CONCAT44(uStack_ae8,local_aec);
    *(undefined4 *)(iVar1 + 0x44) = local_ae4;
    local_aec = 0;
    uStack_ae8 = 0;
    local_ae4 = 0;
  }
  local_14 = 0xffffffff;
  FUN_1008d8fe();
  local_50[0] = 0;
  if (uVar4 != 0) {
    do {
      FUN_10095efc(param_2,local_50);
      local_14 = 1;
      FUN_100962b6(&local_aec);
      local_14 = 0xffffffff;
      FUN_1008d95c();
      local_50[0] = local_50[0] + 1;
    } while (local_50[0] < uVar4);
  }
  bVar3 = FUN_10077c4c();
  *(byte *)(local_24 + 0x49) = bVar3;
  if (0x88 < bVar3) {
    if ((*(int *)(param_2 + 4) == 0) && (*(uint *)(param_2 + 0x28) <= *(uint *)(param_2 + 0x24))) {
      ExceptionList = local_1c;
      return 1;
    }
    local_60 = 0x197;
    local_5c = 0x54;
    local_58 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
    ;
    local_54 = "virtual bool __thiscall CommonEvents::load(FileCoder &)";
    FUN_10072232(local_50,&local_60);
    local_14 = 4;
    local_30 = "{}CommonEvent has more data than expected";
    uStack_2c = 0x29;
    FUN_100721d6(&local_aec,"{}CommonEvent has more data than expected",0x29,local_50);
    local_14 = 5;
    FUN_1006f6d8(&local_aec);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_84,&DAT_10367ca8);
  }
  local_60 = 0x194;
  local_5c = 0x68;
  local_58 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\CommonEvents.hpp"
  ;
  local_54 = "virtual bool __thiscall CommonEvents::load(FileCoder &)";
  FUN_10072232(local_50,&local_60);
  local_14 = 2;
  local_38 = "{}CommonEvent data terminator smaller than 0x89 (got {:#02x})";
  uStack_34 = 0x3d;
  FUN_100963a5(&local_aec,"{}CommonEvent data terminator smaller than 0x89 (got {:#02x})",0x3d,
               local_50,local_24 + 0x49);
  local_14 = 3;
  FUN_1006f6d8(&local_aec);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_a8,&DAT_10367ca8);
}

