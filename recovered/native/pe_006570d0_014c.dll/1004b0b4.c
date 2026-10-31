/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004b0b4 */

undefined4 FUN_1004b0b4(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [3];
  byte local_55;
  int local_54;
  byte **local_50;
  undefined4 local_4c;
  undefined2 local_46;
  undefined4 local_44;
  byte local_40 [4];
  byte *local_3c [4];
  int *local_2c;
  int *local_28;
  byte **local_24;
  byte ***local_20;
  undefined1 uStack_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_58;
  iVar4 = 0;
  do {
    iVar1 = iVar4;
    (&uStack_15)[iVar1] = (&DAT_1028b674)[param_3 & 0xf];
    param_3 = param_3 >> 4;
    iVar4 = iVar1 + -1;
  } while (param_3 != 0);
  iVar3 = -iVar4;
  if (iVar4 == -8 || iVar3 < 8) {
    thunk_FUN_10006e05(&uStack_15 + iVar1,iVar3,local_3c);
    local_50 = (byte **)((int)local_3c - iVar4);
    local_4c = 0;
  }
  else {
    local_50 = local_3c + 2;
    local_4c = 0x84;
  }
  local_54 = (int)local_50 + (2 - (int)local_3c);
  local_40[0] = 0x30;
  local_40[1] = 0;
  local_40[2] = 0x78;
  local_40[3] = 0;
  if (((char)param_4[2] == 'P') &&
     (local_40[0] = 0x30, local_40[1] = 0, local_40[2] = 0x58, local_40[3] = 0, local_3c != local_50
     )) {
    iVar4 = 8;
    if (iVar3 < 8) {
      iVar4 = iVar3;
    }
    iVar1 = 0;
    do {
      if ((byte)(*(char *)((int)local_3c + iVar1) + 0x9fU) < 0x1a) {
        *(char *)((int)local_3c + iVar1) = *(char *)((int)local_3c + iVar1) + -0x20;
      }
      iVar1 = iVar1 + 1;
    } while (iVar4 != iVar1);
  }
  local_55 = *(char *)((int)param_4 + 9) == '\0' & *(byte *)((int)param_4 + 0xd);
  local_3c[3] = &local_55;
  local_3c[2] = local_40;
  local_2c = &local_54;
  local_28 = param_4;
  local_20 = &local_50;
  local_24 = local_3c;
  if (local_55 == 1) {
    FUN_10044e30(local_3c[2],local_3c,param_2);
    uVar2 = extraout_EDX;
    if ((local_55 == 1) &&
       (iVar4 = *param_4 - local_54, uVar2 = extraout_EDX, iVar4 != 0 && local_54 <= *param_4)) {
      local_46 = 0x30;
      FUN_10047dcc(&local_44,extraout_EDX,iVar4,&local_46);
      uVar2 = local_44;
    }
    FUN_10045530(param_1,local_3c,local_50,uVar2);
  }
  else {
    FUN_1004b236(param_1,param_2,local_54,param_4,2,local_3c + 2);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

