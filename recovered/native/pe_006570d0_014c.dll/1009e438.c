/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009e438 */

undefined4 FUN_1009e438(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  undefined1 local_90 [36];
  undefined4 local_6c;
  undefined4 local_68;
  char *local_64;
  char *local_60;
  undefined1 local_5c [24];
  undefined1 local_44 [24];
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_90;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3e60;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  cVar2 = FUN_100994f0(&DAT_1039cb58);
  if (cVar2 != '\0') {
    uVar3 = FUN_10077b66();
    iVar7 = local_24;
    *(undefined4 *)(local_24 + 0x4c) = uVar3;
    iVar4 = FUN_10077b66();
    local_28 = iVar7 + 0x3c;
    *(int *)(iVar7 + 0x3c) = iVar4;
    if (*(int *)(iVar7 + 0x4c) == 120000) {
      FUN_1008a8f0(local_44);
      local_14 = 2;
      FUN_100128b2(local_44);
      local_14 = 0xffffffff;
      FUN_10001134();
      iVar4 = *(int *)(local_24 + 0x3c);
    }
    if (iVar4 != 0) {
      uVar6 = 0;
      iVar4 = 0x50;
      do {
        local_2c = *(int *)(local_24 + 0x30);
        uVar3 = FUN_10077b66();
        *(undefined4 *)(local_2c + iVar4) = uVar3;
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 + 0x54;
      } while (uVar6 < *(uint *)(local_24 + 0x3c));
    }
    uVar6 = FUN_10077b66();
    iVar1 = local_24;
    iVar4 = *(int *)(local_24 + 0x40);
    iVar7 = *(int *)(local_24 + 0x44);
    uVar5 = (iVar7 - iVar4 >> 2) * -0x3b13b13b;
    if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
      FUN_1009fb9e(uVar6,local_44);
      iVar4 = *(int *)(iVar1 + 0x40);
      iVar7 = *(int *)(iVar1 + 0x44);
    }
    if (iVar4 != iVar7) {
      local_24 = local_24 + 0x30;
      do {
        FUN_1009fa62(param_1,local_24,local_28);
        iVar4 = iVar4 + 0x34;
      } while (iVar4 != iVar7);
    }
    *unaff_FS_OFFSET = local_1c;
    return 1;
  }
  local_6c = 0x1ab;
  local_68 = 0x29;
  local_64 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Database.hpp"
  ;
  local_60 = "bool __thiscall Type::ReadDat(FileCoder &)";
  FUN_10072232(local_5c,&local_6c);
  local_14 = 0;
  FUN_10020842(local_44,local_5c,"MAGIC invalid");
  local_14 = 1;
  FUN_1006f6d8(local_44);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_90,&DAT_10367ca8);
}

